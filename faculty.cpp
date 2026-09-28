#include <iostream>
using namespace std;


class Faculty {
private:
string name;
string program;
int age;
int ID;
double salary;
static int facultyCounter;
mutable int profileCounter = 0;
public:

void setName (const string newName){
    this->name = newName;
}
const string getName () const{
    return this->name;
}

void setProgram (const string newProgram){
    this->program = newProgram;
}
const string getProgram () const{
    return this->program;
}

void setAge (const int newAge){
    this->age = newAge;
}
const int getAge () const{
    return this->age;
}

void setID (const int newID){
    this->ID = newID;
}
const int getID () const{
    return this->ID;
}

void setSalary (const double newSalary){
    this->salary = newSalary;
}
const double getSalary () const{
    return this->salary;
}

void printProfile () const{
    profileCounter ++;
    cout << "-------------Profile-------------------\n" << "Name: " << this->name << "\nID: " << this->ID << "\nAge: " << this->age << "\nProgram: " << this->program << "\nSalary: $" << this->salary << "\nProfile_Count: " << this->profileCounter << endl;
}

};

int main(){
Faculty lecturer;
lecturer.setName("Alice");
lecturer.setID(1024);
lecturer.setAge(45);
lecturer.setProgram("Computer Science");
lecturer.setSalary(4500.50);
lecturer.printProfile();
lecturer.printProfile();

    return 0;
}
