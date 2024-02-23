#include "Produce.h"

Produce::Produce(std::string& name)
{
	m_produceName = name;
	m_produceQuantity = 1;
}

void Produce::Increment()
{
	m_produceQuantity++;
}

const std::string& Produce::GetProduceName() const
{
	return m_produceName;
}

const int Produce::GetProduceQuantity() const
{
	return m_produceQuantity;
}
