#include <iostream>
#include <string>
#include "accountHeader.h"

int main(){
//////////////////////////////////////////////////////////////////////////////////////////////CASE STUDY A///////////////////////////////////////////////
    Account myAccount{};// Account created using the default constructor

    // Value before set name
    std::cout << "Initial account name is: " << myAccount.getName() << std::endl;

    ////////////////////////// values after set name /////////////////////////////////
    std::string input;
    std::cout << "Enter account holder name: " << std::endl;
    std::getline(std::cin, input);// getline is used so a FULL name (with spaces) is captured
    myAccount.setName(input);
    std::cout << "Welcome, " << myAccount.getName() << std::endl;
    // potential leak if no const was there: // myAccount.getName() = "Hacker";

//////////////////////////////////////////////////////////////////////////////////////////////CHALLENGE 1///////////////////////////////////////////////
    Account anotherAccount{};
    anotherAccount.setName("Ama Mensah");
    // Each object owns its own copy of the name data member
    std::cout << "\nmyAccount name: " << myAccount.getName() << std::endl;
    std::cout << "anotherAccount name: " << anotherAccount.getName() << std::endl;

//////////////////////////////////////////////////////////////////////////////////////////////CHALLENGE 2///////////////////////////////////////////////
    std::cout << "\n--- Account details (before transactions) ---" << std::endl;
    myAccount.display();

    myAccount.deposit(-200);// a. negative amount, rejected
    myAccount.deposit(0);// b. zero amount, rejected
    myAccount.deposit(500);// c. valid amount, accepted

    std::cout << "\n--- Account details (after deposits) ---" << std::endl;
    myAccount.display();// d. display account details

    ///////////////////////// Extra: withdraw tests //////////////////////////////
    myAccount.withdraw(1000);// more than balance, rejected
    myAccount.withdraw(200);// possible, accepted
    std::cout << "Current balance: " << myAccount.checkBalance() << std::endl;
    ///////////////////////// Extra: withdraw tests //////////////////////////////

    return 0;
}
