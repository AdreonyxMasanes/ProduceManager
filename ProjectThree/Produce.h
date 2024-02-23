// TODO: DEFINE GUARD
#include <iostream>
class Produce
{
	private:
		std::string m_produceName = "";
		int m_produceQuantity = 0;
	public:
		Produce(std::string& name);
		void Increment();
		const std::string& GetProduceName() const;
		const int GetProduceQuantity() const;
};