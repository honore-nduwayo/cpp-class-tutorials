#include <iostream>
#include <string>
#include <string_view>

class Account
{
private:
    std::string name{"unknown"}; // {} VERY CRUCIAL TO INITIALIZE DATA. UNINITIALISED DATA IS DANGEROUS
    double balance{0.0};

    //////////////////////////////////////////////////////////////////////////////////////////////PROTOTYPES (DECLARED INSIDE THE CLASS)///////////////////////////////////////////////
public:
    //////////////////////////// SETTERS AND GETTERS prototypes /////
    //////////////////////////// name getter and setter prototypes /////
    void setName(std::string_view name);
    const std::string &getName() const; // const is very crucial to protect private data from being changed from the outside
                                        //////////////////////////// name getter and setter prototypes /////
                                        //////////////////////////// balance getter and setter prototypes /////
    void setBalance(double balance);
    double getBalance() const;
    //////////////////////////// balance getter and setter prototypes /////
    //////////////////////////// SETTERS AND GETTERS prototypes /////

    //////////////////////////// BEHAVIORS prototypes /////
    void deposit(double amount);
    bool withdraw(double amount);
    double checkBalance() const;
    void display() const;
    //////////////////////////// BEHAVIORS prototypes /////
};

//////////////////////////////////////////////////////////////////////////////////////////////DEFINITIONS (DEFINED OUTSIDE THE CLASS USING Account::)///////////////////////////////////////////////
//////////////////////////// SETTERS AND GETTERS definitions /////
//////////////////////////// name getter and setter definitions /////
void Account::setName(std::string_view name)
{
    this->name = name;
}
const std::string &Account::getName() const
{
    return this->name;
}
//////////////////////////// name getter and setter definitions /////
//////////////////////////// balance getter and setter definitions /////
void Account::setBalance(double balance)
{
    // A balance can never be negative
    if (balance < 0)
    {
        std::cout << "Balance cannot be negative: " << balance << std::endl;
    }
    else
    {
        this->balance = balance;
    }
}
double Account::getBalance() const
{
    return this->balance;
}
//////////////////////////// balance getter and setter definitions /////
//////////////////////////// SETTERS AND GETTERS definitions /////

//////////////////////////// BEHAVIORS definitions /////
///////////////////////// Deposit definition //////////////////////////////
void Account::deposit(double amount)
{
    // Amount must be greater than 0 before it is added to the balance
    if (amount <= 0)
    {
        std::cout << "Invalid deposit amount: " << amount << std::endl;
    }
    else
    {
        this->balance += amount;
        std::cout << "Deposited: " << amount << std::endl;
    }
}
///////////////////////// Deposit definition //////////////////////////////
///////////////////////// Withdraw definition //////////////////////////////
bool Account::withdraw(double amount)
{
    // Withdrawal is only possible if the amount is valid and does not exceed the balance
    if (amount <= 0)
    {
        std::cout << "Invalid withdrawal amount: " << amount << std::endl;
        return false;
    }
    if (amount > this->balance)
    {
        std::cout << "Insufficient funds" << std::endl;
        return false;
    }
    this->balance -= amount;
    std::cout << "Withdrew: " << amount << std::endl;
    return true;
}
///////////////////////// Withdraw definition //////////////////////////////
///////////////////////// Check Balance definition //////////////////////////////
double Account::checkBalance() const
{
    return this->balance;
}
///////////////////////// Check Balance definition //////////////////////////////
///////////////////////// Display definition //////////////////////////////
void Account::display() const
{
    std::cout << "{\nAccount Holder : " << this->name << "\nBalance : " << this->balance << "\n}" << std::endl;
}
///////////////////////// Display definition //////////////////////////////
//////////////////////////// BEHAVIORS definitions /////