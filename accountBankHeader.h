#include <iostream>
#include<string>
#include<string_view>
#include<stdexcept>

class Account{
private:
std::string name{"unknown"};
double balance{};
const std::string accountNumber;

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
Account(std::string name, double balance = 0.0, const std::string acccountNumber ="########")
   :name{name}, balance{balance}, accountNumber{acccountNumber}///Inititialization happens inside the definition and it's fast
{
// //Body
if (balance < 0){
     throw std::invalid_argument("Balance can't be negative");
  }
}

Account(std::string name): name{name}
{}


////////////////////////////////////// prototype setter and getters
void setName(std::string_view name);
const std::string &getName() const;// Const is very crucial to protect priveate data from being changed from the outside
void setBalance(double balance);
double getBalance() const;
const std::string &getAccountNumber() const;
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

const std::string &Account::getAccountNumber() const{
   return accountNumber;

}

void displayDetails(Account &account)
{
   std::cout<<" Account Holder: "<< account.getName()<<std::endl;
   std::cout<<"Accout Number: "<<account.getAccountNumber()<<std::endl;
   std::cout<<"Account Balance: "<<account.getBalance()<< "\n"<<std::endl;
}