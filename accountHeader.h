#include <iostream>
#include<string>
#include<string_view>

class Account{
private:
std::string name{"uknown"};//{} VERY CRUCIAL TO INITIALIZE DATA. UNINITIALISED DATA IS DANGEROUS
double balance{0.0};

public:
// default constuctor
//Account(){
 //  std::cout <<"Account created Successfully"<< std::endl;
//}
/*
/////////Constructor/////
   
/////////Constructor OLD APPROACH
Account (std::string name){
   this->name = name;
};
*/
/////////Constructor OLD APPROACH/////////

///////// Constructor NEW APPROACH
Account (std::string name, double balance)
   :name{name}, balance{balance}
{
   //body here. THIS AREA CAN BE USED FOR DATA VALIDATION,... INSTRUCTIONS, .. DEPENDING ON WHAT YOU'RE EXPECTING
   // EXAMPLE
   if(balance <0){
      std::cout <<"Balnce cannot be negative"<<std::endl;
   }
};


// Single parameter constructor.
//Account (std::string name)
//:name{name}{}
///////// Constructor NEW APPROACH
/////////Constructor/////

/// -------------VERY IMPORTANT -------------------
Account() = default; // I have to call it back as soon as a customized constructor is created, otherwise, it's overwritten
   


void setName(std::string_view name);
const std::string &getName() const;// Const is very crucial to protect priveate data from being changed from the outside
 };

 /// Define the setters & getters here or above inside the class

 void Account::setName(std::string_view name){
    this->name = name;
 }
 const std::string &Account::getName() const {
    return name;
 }