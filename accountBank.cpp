#include <iostream>
#include "accountBankHeader.h"

int main()
{

    Account customer1{"Emma", -100};
    Account customer2{};
    //Account customer3{"Yahaya"}; // ERRRRRRROOOOOORRRRRR TO FIX CREATE A CONSTRUCTOR THAT TAKES ONLY ONE NAME
    Account customer4{"Boss", 100};




    // std::cout << "Initial name customer1: " << customer1.getName() << std::endl;
    // std::cout << "Initial balance customer1: " << customer1.getBalance() << std::endl;


    // std::cout << "Initial name customer2: " << customer2.getName() << std::endl;
    // std::cout << "Initial balance customer2: " << customer2.getBalance() << std::endl;
    

    //std::cout << "Initial name customer3: " << customer3.getName() << std::endl;
    //std::cout << "Initial balance customer3: " << customer3.getBalance() << std::endl;


    // std::cout << "Initial name customer4: " << customer4.getName() << "account: "<< customer4.getAccountNumber()<<std::endl;
    // std::cout << "Initial balance customer4: " << customer4.getBalance() << std::endl;
    displayDetails(customer1);
    displayDetails(customer2);
    displayDetails(customer4);
    
    return 0;
}