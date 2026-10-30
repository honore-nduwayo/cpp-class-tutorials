#include <iostream>
#include <string>
#include "accountHeader.h"

int main()
{
    //////////////////////////////////////////////////////////////////////////////////////////////CASE STUDY A///////////////////////////////////////////////
    std::cout << "----- CASE STUDY A -----" << std::endl;
    Account myAccount{};

    // Initial name, before any value is assigned
    std::cout << "Initial account name is: " << myAccount.getName() << std::endl;

    ////////////////////////// values after set name /////////////////////////////////
    std::string input;
    std::cout << "Enter account holder name: " << std::endl;
    std::getline(std::cin, input); // getline captures the FULL name (with spaces)
    myAccount.setName(input);
    std::cout << "Welcome, " << myAccount.getName() << std::endl;
    // potential leak if no const was there: // myAccount.getName() = "Hacker";

    //////////////////////////////////////////////////////////////////////////////////////////////CHALLENGE 1///////////////////////////////////////////////
    std::cout << "\n----- CHALLENGE 1 -----" << std::endl;
    Account anotherAccount{};
    anotherAccount.setName("Ama Mensah");

    // Each object has its own copy of the name data member
    std::cout << "myAccount name: " << myAccount.getName() << std::endl;
    std::cout << "anotherAccount name: " << anotherAccount.getName() << std::endl;

    //////////////////////////////////////////////////////////////////////////////////////////////CHALLENGE 2///////////////////////////////////////////////
    std::cout << "\n----- CHALLENGE 2 -----" << std::endl;

    // Print details of the person's account
    myAccount.display();

    myAccount.deposit(-200); // a. pass value -200 to deposit
    myAccount.deposit(0);    // b. pass value 0 to deposit
    myAccount.deposit(500);  // c. pass value 500 to deposit

    // d. display account details
    myAccount.display();

    return 0;
}