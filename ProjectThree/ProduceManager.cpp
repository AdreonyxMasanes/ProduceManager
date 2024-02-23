#include "ProduceManager.h"

void ProduceManager::LoadProduce()
{
	std::ifstream file;
	file.open(m_fileName);
	if (file.is_open())
	{
		std::string produceName;
		while (file >> produceName)
		{
			bool alreadyExist = false;
			for (auto p : m_produce)
			{
				if (produceName == p->GetProduceName())
				{
					alreadyExist = true;
					p->Increment();
					break;
				}
			}
			if (!alreadyExist)
			{
				std::shared_ptr<Produce> produce(new Produce(produceName));
				m_produce.push_back(produce);
			}
		}
		std::cout << "Produce Loaded" << std::endl;
	}
	else
	{
		std::cout << "The file could not be opened" << std::endl;
	}
}

ProduceManager::ProduceManager(std::string& fileName)
	: m_fileName(fileName)
{
	LoadProduce();
}

const int ProduceManager::Find(std::string& produceName)
{
	for (auto p : m_produce)
	{
		if (produceName == p->GetProduceName())
		{
			return p->GetProduceQuantity();
		}
	}
	return -1;
}
