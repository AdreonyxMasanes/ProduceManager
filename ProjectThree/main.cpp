#include "ProduceManager.h"
#include <stdlib.h>
int main()
{
	// File With Producec
	std::string file = "ProduceList.txt";
	// Create Produce Manager
	ProduceManager produceManager(file);

  int userInput;
  do 
  {
    system("CLS");
    // print menu
    std::cout << "Welcome to my produce manager!" << std::endl;
    std::cout << "Please choose an option from below: " << std::endl;
    std::cout << "Menu option 1: Enter an item to find." << std:: endl;
    std::cout << "Menu option 2: List all the produce." << std::endl;
    std::cout << "Menu option 3: List all produce formatted like a histogram." << std::endl;
    std::cout << "Menu option 4: Quit." << std::endl;
    std::cout << "Please Enter a number for your choice: ";

    // Userinput
    std::cin >> userInput;
    switch (userInput) 
    {
      // Find item
      case 1:
      {
        std::cout << "Enter a item to look for: " << std::endl;
        std::string item = "";
        std::cin >> item;
        int itemQuantity = produceManager.Find(item);
        if( itemQuantity == -1)
        {
          std::cout << " Item was not found. Returning to menu." << std::endl;
        }
        else 
        {
          std::cout << item << " Quantity: " << itemQuantity << std::endl;
        }
        break;
      }
      //List items
      case 2:
      {
        produceManager.List();
        break;
      }
      // List as a Histogram
      case 3:
      {
        produceManager.ListHisto();
        break;
      }
      // Quit
      case 4:
      {
        std::cout << "Goodbye!" << std::endl;
      }
      // Bad input
      default:
      {
        std::cout << "Please enter a valid option. Returning to menu" << std::endl;
      }
    }

    system("Pause");
  }while (userInput != 4); 
}
