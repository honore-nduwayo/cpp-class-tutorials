//// TO FINISH GET DETAILS AND PRINT THEM OUT USING BOTH CLASSES AND STRUCT


#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    string course;
    int age;
    float CGPA;
    bool chronicIlness;

//////////////////////////////////////////////////////////////////////////////////////////////SETTERS AND GETTERS///////////////////////////////////////////////
public:
//////////////////////////// name getter and setter /////
void setName(string newName){
    this->name = newName;
}
string getName(){
    return this->name;
}
//////////////////////////// name getter and setter /////
//////////////////////////// Age getter and setter /////

void setAge( int newAge){
    this->age = newAge;
}
int getID(){
    return this->age;
}

//////////////////////////// Age getter and setter /////
//////////////////////////// Course getter and setter /////
void setCourse(string newCourse){
    this->course = newCourse;
}
string getCourse(){
    return this->course;
}
//////////////////////////// Course getter and setter /////
//////////////////////////// Chronic disease getter and setter /////

void setChronicIlness( bool newBool){
    this->chronicIlness = newBool;
}
bool getChronicIlness(){
    return this->chronicIlness;
}

//////////////////////////// Chronic disease getter and setter /////
//////////////////////////// CGPA getter and setter /////

void setCGPA( float newCGPA){
    this->CGPA = newCGPA;
}
float getCGPA(){
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
    void display(){
        cout << "\n\nStudent details:\n\n" << "Name:" << name << "\nCourse: " << course << "\nAge: " << age << "Chronic Ilness: "<< chronicIlness << "CGPA: "<< CGPA <<"\n" <<endl;
    }
///////////////////////// Display//////////////////////////////

};

int main(){
    int ID;
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
cout << "Chrinic Ilness? (Yes: 1 or No : 0): " << endl;
cin >> chronicIlness;
cout <<"Class you take: "<< endl;
cin>> course;
cout << "Club you want to join:  " << endl;
cin >> club;

Student student;
student.setName(name);
student.setCourse(course);
student.setAge(ID);
student.setChronicIlness(chronicIlness);
student.setCGPA(CGPA);
student.display();
student.joinclub(name,club);
student.takeclass(name,course);
    return 0;
}