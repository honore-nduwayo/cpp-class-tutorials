#include <iostream>
#include "accountHeader.h"


int main(){
 //////////////////////////////////////////////////////////////////////
 

    //Account myAccount{};/// Account creatred in refernce to the EMPTY  constructor structure
    //std::cout << "Initial: " << myAccount.getName()<<std::endl;

////////////////////
    Account myAccount{};// Account creatred in refernce to the constructor structure
   // Value before set name
    std::cout << "Initial: " << myAccount.getName()<<std::endl;


////////////////////////// values after set name /////////////////////////////////
     //myAccount.setName("Yaw");
     // potential leak if no const was there: // myAccount.getName() = "Hacker";
    //std::cout << "after setting name: " << myAccount.getName()<<std::endl;

    return 0;
}