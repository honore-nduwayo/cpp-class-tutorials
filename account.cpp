#include <iostream>
#include "accountHeader.h"


int main(){

    Account myAccount{};
    std::cout << "Initial: " << myAccount.getName()<<std::endl;

    return 0;
}