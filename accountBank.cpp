#include <iostream>
#include "accountBankHeader.h"

int main()
{

    Account customer1{"Emma", 100};
    Account customer2{};
    Account customer3{"Yahaya"}; // ERRRRRRROOOOOORRRRRR TO FIX CREATE A CONSTRUCTOR THAT TAKES ONLY ONE NAME
    std::cout << "Initial name customer1: " << customer1.getName() << std::endl;
    std::cout << "Initial balance customer1: " << customer1.getBalance() << std::endl;


    std::cout << "Initial name customer2: " << customer2.getName() << std::endl;
    std::cout << "Initial balance customer2: " << customer2.getBalance() << std::endl;
    

    std::cout << "Initial name customer3: " << customer3.getName() << std::endl;
    std::cout << "Initial balance customer3: " << customer3.getBalance() << std::endl;


    return 0;
}