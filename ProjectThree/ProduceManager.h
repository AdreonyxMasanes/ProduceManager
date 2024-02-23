#include "Produce.h"
#include <vector>
#include <fstream>
#include <memory>
class ProduceManager
{
	private:
		std::string m_fileName = "";
		std::vector<std::shared_ptr<Produce>> m_produce;
		void LoadProduce();
	public:
		ProduceManager(std::string& fileName);
		const int Find(std::string& produceName);
};