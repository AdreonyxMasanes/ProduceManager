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

			// convert to lowercase
			for(char c : produceName)
			{
				putchar(std::tolower(produceName[c]));
			}
    

			bool alreadyExist = false;
			for (auto p : m_produce)
			{
				// If the produce already exist
				if (produceName == p->GetProduceName())
				{					
					alreadyExist = true;
					p->Increment();
					break;
				}
			}
			if (!alreadyExist)
			{
				// Create a pointer to the new Produce
				std::shared_ptr<Produce> produce(new Produce(produceName));
				m_produce.push_back(produce);
			}
		}
		std::cout << "Produce Loaded" << std::endl;
	}
	// File was not found
	else
	{
		std::cout << "The file could not be opened" << std::endl;
	}
}

std::string ProduceManager::GetAsteriks(int numOfAsteriks) const
{
	std::string asteriks = "";
	for (int i = 0; i < numOfAsteriks; i++)
	{
		asteriks += "*";
	}
	return asteriks;
}

ProduceManager::ProduceManager(std::string& fileName)
	: m_fileName(fileName)
{
	LoadProduce();
}

const int ProduceManager::Find(std::string& produceName)
{
  // convert to lowercase
  for(char c : produceName)
  {
    putchar(std::tolower(produceName[c]));
  }

	// Auto is a std::shared_ptr<Produce>
	for (auto p : m_produce)
	{
		if (produceName == p->GetProduceName())
		{
			return p->GetProduceQuantity();
		}
	}
	return -1;
}

const void ProduceManager::List() const
{
	for (auto p : m_produce)
	{
		std::cout << p->GetProduceName() << " " << p->GetProduceQuantity() << std::endl;
	}
}
const void ProduceManager::ListHisto() const
{
	for (auto p : m_produce)
	{
		std::cout << p->GetProduceName() << " " << GetAsteriks(p->GetProduceQuantity()) << std::endl;
	}
}
