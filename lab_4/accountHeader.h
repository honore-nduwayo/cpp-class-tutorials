#ifndef ACCOUNT_HEADER_H
#define ACCOUNT_HEADER_H

#include <iostream>
#include <string>
#include <string_view>

class Account{
    private:
    std::string name{"unknown"};// {} VERY CRUCIAL TO INITIALIZE DATA. UNINITIALISED DATA IS DANGEROUS
    double balance{0.0};

//////////////////////////////////////////////////////////////////////////////////////////////CONSTRUCTORS///////////////////////////////////////////////
    public:
///////////////////////// Default constructor //////////////////////////////
    Account() = default;// Must be called back once a customized constructor exists, otherwise it is removed
///////////////////////// Default constructor //////////////////////////////
///////////////////////// Parameterised constructor //////////////////////////////
    Account(std::string name, double balance)
        :name{name}, balance{balance}
    {
        // Data validation: an account can never start with a negative balance
        if(balance < 0){
            std::cout << "Balance cannot be negative. Balance set to 0.0" << std::endl;
            this->balance = 0.0;
        }
    }
///////////////////////// Parameterised constructor //////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////SETTERS AND GETTERS///////////////////////////////////////////////
//////////////////////////// name getter and setter /////
    void setName(std::string_view name);
    const std::string& getName() const;// const protects private data from being changed from the outside
//////////////////////////// name getter and setter /////
//////////////////////////// balance getter /////
    double getBalance() const;
//////////////////////////// balance getter /////

//////////////////////////////////////////////////////////////////////////////// BEHAVIORS ///////////////////////////////////////////
    bool deposit(double amount);
    bool withdraw(double amount);
    double checkBalance() const;
    void display() const;
};

//////////////////////////////////////////////////////////////////////////////// DEFINITIONS ///////////////////////////////////////////
// inline is needed because these are defined in a header (prevents multiple definition errors)

//////////////////////////// name getter and setter /////
inline void Account::setName(std::string_view name){
    this->name = name;
}
inline const std::string& Account::getName() const{
    return this->name;
}
//////////////////////////// name getter and setter /////
//////////////////////////// balance getter /////
inline double Account::getBalance() const{
    return this->balance;
}
//////////////////////////// balance getter /////

///////////////////////// Deposit //////////////////////////////
inline bool Account::deposit(double amount){
    // Only amounts greater than 0 are accepted, otherwise balance stays untouched
    if(amount <= 0){
        std::cout << "Invalid deposit amount: " << amount << ". Amount must be greater than 0." << std::endl;
        return false;
    }
    this->balance += amount;
    std::cout << "Deposited: " << amount << std::endl;
    return true;
}
///////////////////////// Deposit //////////////////////////////
///////////////////////// Withdraw //////////////////////////////
inline bool Account::withdraw(double amount){
    if(amount <= 0){
        std::cout << "Invalid withdrawal amount: " << amount << ". Amount must be greater than 0." << std::endl;
        return false;
    }
    if(amount > this->balance){
        std::cout << "Insufficient funds. Cannot withdraw " << amount << " from a balance of " << this->balance << std::endl;
        return false;
    }
    this->balance -= amount;
    std::cout << "Withdrew: " << amount << std::endl;
    return true;
}
///////////////////////// Withdraw //////////////////////////////
///////////////////////// Check Balance //////////////////////////////
inline double Account::checkBalance() const{
    return this->balance;
}
///////////////////////// Check Balance //////////////////////////////
///////////////////////// Display //////////////////////////////
inline void Account::display() const{
    std::cout << "{\nAccount Holder : " << this->name << "\nBalance : " << this->balance << "\n}" << std::endl;
}
///////////////////////// Display //////////////////////////////

#endif
