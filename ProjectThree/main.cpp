#include "ProduceManager.h"
int main()
{
	// File With Producec
	std::string file = "ProduceList.txt";
	// Create Produce Manager
	ProduceManager produceManager(file);
	// Produe to find
	std::string produceToFind = "Onions";
	// Print Out produce information
	std::cout << "Onions in stock: " << produceManager.Find(produceToFind) << std::endl;
}