#include <iostream>
#include<string>
#include<string_view>

class Account{
private:
std::string name;

public:
void setName(std::string_view name);
const std::string &getName() const;
 };

 /// Define the setters & getters here or above inside the class

 void Account::setName(std::string_view name){
    this->name = name;
 }
 const std::string &Account::getName() const{
    return name;
 }