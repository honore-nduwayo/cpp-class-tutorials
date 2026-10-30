#include <iostream>
#include<string>
#include<string_view>

class Account{
private:
std::string name{"unknown"};
double balance{};

public:
Account() = default;
//Constructor (FASTER)- SLOW IS Account(){}
// //--------OLD WAY -------------
// Account(std::string name, double balance){
// name = "unknown";
// balance = 0.0;
// //Body
// ///Inititialization happens inside the body and it's slow
// }
//--------NEW APPROACH---------------
Account(std::string name, double balance)
   :name{name}, balance{balance}///Inititialization happens inside the definition and it's fast
{
//Body
}

Account(std::string name): name{name}
{}


/// prototype setter and getters
void setName(std::string_view name);
const std::string &getName() const;// Const is very crucial to protect priveate data from being changed from the outside
void setBalance(double balance);
double getBalance() const;
 };

 /// Define the setters & getters here or above inside the class
/////////////////////////////////////////////////////////////////
 void Account::setName(std::string_view name){
    this->name = name;
 }
 const std::string &Account::getName() const {
    return name;
 }
//////////////////////////////////////////////////////////////////////////////
void Account::setBalance(double balance){
this->balance = balance;

};
double Account::getBalance() const{
   return balance;
};