#include <iostream>
using namespace std;


class Dog {
private:
std::string name;
int age;
static short int counter;
mutable int getAgeCounter = 0, getNameCounter =0;
public:

///////////// Behaviors//////
//bark
void bark() {
    cout << name << "says Woof\n" << endl << "They're only " << age << endl;
}

///DISPLAY BIO// function prototype
friend void displayBio(const Dog d);


//////////////////////////// name getter and setter /////
void setName (const string newName){
    this->name = newName;
}
const string getName () const{
    getNameCounter ++;
    return this->name;
}
//////////////////////////// name getter and setter /////
//////////////////////////// age getter and setter /////

void setAge(const int newAge){
    this->age = newAge;
}
const int getAge() const{
    getAgeCounter ++;
    return this->age;
}
//////////////////////////// age getter and setter /////

};

void displayBio(Dog d){
cout << "-------------Bio-------------------\n" << "Name: "<< d.getName()<< "\n Age: " << d.getAge()<< "\nAge_count: " << d.getAgeCounter << "\nName_Count:" << d.getNameCounter << endl;
};

int main(){
Dog bruno;
bruno.setName("Bruno");
bruno.setAge(12);
bruno.bark();
displayBio(bruno);

    return 0;
}