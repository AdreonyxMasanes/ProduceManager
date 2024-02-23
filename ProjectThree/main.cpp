#include "ProduceManager.h"

// Look at the ProduceList.txt choose an item and enter it as a string to test.
// Menu and UI will be created at a later date. This is just to make sure the logic works
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
	std::cout << "----------------------------------------------------" << std::endl;
	produceManager.List();
	std::cout << "----------------------------------------------------" << std::endl;
	produceManager.ListHisto();

}