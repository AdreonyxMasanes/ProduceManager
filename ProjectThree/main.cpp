#include "ProduceManager.h"

int main()
{
	// File With Producec
	std::string file = "ProduceList.txt";
	// Create Produce Manager
	ProduceManager produceManager(file);

  int userInput;
  do 
  {
    // print menu
    std::cout << "Welcome to my produce manager!" << std::endl;
    std::cout << "Please choose an option from below: " << std::endl;
    std::cout << "Menu option 1: Enter an item to find." << std:: endl;
    std::cout << "Menu option 2: List all the produce." << std::endl;
    std::cout << "Menu option 3: List all produce formatted like a histogram." << std::endl;
    std::cout << "Menu option 4: Quit." << std::endl;
    std::cout << "Please Enter a number for your choice: ";

    std::cin >> userInput;
    switch (userInput) 
    {
      case 1:
      {
        std::cout << "Enter a item to look for: " << std::endl;
        std::string item = "";
        std::cin >> item;
        int itemQuantity = produceManager.Find(item);
        if( itemQuantity == -1)
        {
          std::cout << "Item was not found. Returning to menu." << std::endl;
        }
        else 
        {
          std::cout << item << " Quantity: " << itemQuantity << std::endl;
          break;
        }
      }
      case 2:
      {
        produceManager.List();
        break;
      }
      case 3:
      {
        produceManager.ListHisto();
        break;
      }
      case 4:
      {
        std::cout << "Goodbye!" << std::endl;
      }
      default:
      {
        std::cout << "Please enter a valid option. Returning to menu" << std::endl;
      }
    }

  }while (userInput != 4); 
}
