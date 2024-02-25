#include "Produce.h"
#include <vector>
#include <fstream>
#include <memory>
#include <cstring>
class ProduceManager
{
	private:
		std::string m_fileName = "";
		// Vector of Ptrs to Produce Mem Locations
		std::vector<std::shared_ptr<Produce>> m_produce;
		// Read in produe from file
		void LoadProduce();
		std::string GetAsteriks(int numOfAsteriks) const;
	public:
		// Create a manager
		ProduceManager(std::string& fileName);
		// Find produce Quantity based on name
		const int Find(std::string& produceName);
		const void List() const;
		const void ListHisto() const;
};
