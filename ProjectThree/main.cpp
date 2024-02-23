#include "ProduceManager.h"
int main()
{
	std::string file = "ProduceList.txt";
	ProduceManager produceManager(file);
	std::string produceToFind = "Onions";
	std::cout << "Onions in stock: " << produceManager.Find(produceToFind) << std::endl;

}