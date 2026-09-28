//// TO FINISH GET DETAILS AND PRINT THEM OUT USING BOTH CLASSES AND STRUCT


#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    string course;
    int age;
    int ID;
    float CGPA;
    bool chronicIlness;
    static int studentCounter;
    mutable int displayCounter = 0;

//////////////////////////////////////////////////////////////////////////////////////////////SETTERS AND GETTERS///////////////////////////////////////////////
public:
//////////////////////////// name getter and setter /////
void setName(const string newName){
    this->name = newName;
}
const string getName() const{
    return this->name;
}
//////////////////////////// name getter and setter /////
//////////////////////////// Age getter and setter /////

void setAge(const int newAge){
    this->age = newAge;
}
const int getAge() const{
    return this->age;
}

//////////////////////////// Age getter and setter /////
void setID(const int newID){
    this->ID = newID;
}
const int getID() const{
    return this->ID;
}
//////////////////////////// Course getter and setter /////
void setCourse(const string newCourse){
    this->course = newCourse;
}
const string getCourse() const{
    return this->course;
}
//////////////////////////// Course getter and setter /////
//////////////////////////// Chronic disease getter and setter /////

void setChronicIlness(const bool newBool){
    this->chronicIlness = newBool;
}
const bool getChronicIlness() const{
    return this->chronicIlness;
}

//////////////////////////// Chronic disease getter and setter /////
//////////////////////////// CGPA getter and setter /////

void setCGPA(const float newCGPA){
    this->CGPA = newCGPA;
}
const float getCGPA() const{
    return this->CGPA;
}
//////////////////////////// CGPA disease getter and setter /////

//////////////////////////////////////////////////////////////////////////////// BEHAVIORS ///////////////////////////////////////////
//void takeclass(int name, string course);
//void joinclub(int name, string club);
///////////////////////// Take Classs //////////////////////////////

void takeclass(string name, string course){
    cout << name <<" Takes " << course << endl;
}
///////////////////////// Take Classs//////////////////////////////
///////////////////////// Join Club //////////////////////////////

void joinclub(string name, string club){
cout << name <<" Joins " << club <<endl;

}
///////////////////////// Join Club //////////////////////////////
///////////////////////// Display//////////////////////////////
    void display() const{
        displayCounter ++;
        cout << "\n\nStudent details:\n\n" << "Name:" << this->name << "\nCourse: " << this->course << "\nID: " << this->ID << "\nAge: " << this->age << "Chronic Ilness: "<< this->chronicIlness << "CGPA: "<< this->CGPA << "\nDisplay_Count: " << this->displayCounter <<"\n" <<endl;
    }
///////////////////////// Display//////////////////////////////

};

int main(){
    int ID, age;
    string name, course, club;
    bool chronicIlness;
    float CGPA;
cout << "Enter Student Details\n -------------------------" << endl;
cout << "Name: " << endl;
cin >> name;
cout << "Course: " << endl;
cin >> course;
cout << "ID: " << endl;
cin >> ID;
cout << "Age: " << endl;
cin >> age;
cout << "Chrinic Ilness? (Yes: 1 or No : 0): " << endl;
cin >> chronicIlness;
cout << "CGPA: " << endl;
cin >> CGPA;
cout <<"Class you take: "<< endl;
cin>> course;
cout << "Club you want to join:  " << endl;
cin >> club;

Student student;
student.setName(name);
student.setCourse(course);
student.setAge(age);
student.setID(ID);
student.setChronicIlness(chronicIlness);
student.setCGPA(CGPA);
student.display();
student.joinclub(name,club);
student.takeclass(name,course);
    return 0;
}