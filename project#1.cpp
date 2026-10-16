#include <iostream>
using namespace std;

class Auditor; // so Account knows Auditor exists

class Account {
private:
string owner;
int balancePesewas = 0;
mutable int accessCount = 0;

friend class Auditor;

public:
//////////////////////////// owner getter and setter /////
void setOwner (const string newOwner){
    this->owner = newOwner;
}
const string getOwner () const{
    return this->owner;
}
//////////////////////////// owner getter and setter /////

//////////////////////////////////////////////////////////////////////////////// BEHAVIORS ///////////////////////////////////////////
///////////////////////// Deposit //////////////////////////////
void deposit (const int pesewas){
    if (pesewas <= 0){
        cout << "Deposit amount must be more than 0" << endl;
        return;
    }
    this->balancePesewas = this->balancePesewas + pesewas;
    cout << this->owner << " deposited " << pesewas << " pesewas" << endl;
}
///////////////////////// Deposit //////////////////////////////
///////////////////////// Withdraw //////////////////////////////
void withdraw (const int pesewas){
    if (pesewas <= 0){
        cout << "Withdraw amount must be more than 0" << endl;
        return;
    }
    if (pesewas > this->balancePesewas){
        cout << "Insufficient funds, " << this->owner << " cannot withdraw " << pesewas << " pesewas" << endl;
        return;
    }
    this->balancePesewas = this->balancePesewas - pesewas;
    cout << this->owner << " withdrew " << pesewas << " pesewas" << endl;
}
///////////////////////// Withdraw //////////////////////////////
///////////////////////// Balance //////////////////////////////
int balance () const{
    accessCount ++; // allowed because accessCount is mutable
    return this->balancePesewas;
}
///////////////////////// Balance //////////////////////////////
///////////////////////// Access Count //////////////////////////////
const int getAccessCount () const{
    return this->accessCount;
}
///////////////////////// Access Count //////////////////////////////
///////////////////////// Print Address //////////////////////////////
void printAddress () const{
    cout << "Account of " << this->owner << " is at address: " << (void*)this << "\n";
}
///////////////////////// Print Address //////////////////////////////
///////////////////////// Display //////////////////////////////
void display () const{
    int pesewas = balance();
    int cedis = pesewas / 100;
    int rest = pesewas % 100;
    cout << "-------------Account-------------------\n" << "Owner: " << this->owner << "\nBalance: " << pesewas << " pesewas" << "\nBalance (GHC): " << cedis << ".";
    if (rest < 10){
        cout << "0"; // so 5 pesewas shows as .05 not .5
    }
    cout << rest << "\nAccess_Count: " << this->accessCount << endl;
}
///////////////////////// Display //////////////////////////////

};

class Auditor {
public:
///////////////////////// Flag //////////////////////////////
void flag (const Account& a) const{
    // reads balancePesewas directly, no getter, so no access count increase
    if (a.balancePesewas > 2000000){
        cout << "Account balance is above accepted values" << endl;
    }
    else{
        cout << "Account of " << a.owner << " is within accepted values" << endl;
    }
}
///////////////////////// Flag //////////////////////////////
};

int main(){
Account acc1;
acc1.setOwner("Kofi");
acc1.deposit(150000);
acc1.withdraw(50000);
acc1.withdraw(900000);
acc1.display();
cout << "Balance read: " << acc1.balance() << " pesewas" << endl;
cout << "Times balance was read: " << acc1.getAccessCount() << endl;
acc1.printAddress();

Account acc2;
acc2.setOwner("Ama");
acc2.deposit(2500000);
acc2.display();
acc2.printAddress();

Auditor auditor;
auditor.flag(acc1);
auditor.flag(acc2);

    return 0;
}