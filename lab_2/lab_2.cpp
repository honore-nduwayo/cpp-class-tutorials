//// LAB 2: DESIGNING CLASSES AND OBJECTS FROM A REAL-WORLD SCENARIO


#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string name;
    int studentID;
    string programme;
    int level;

//////////////////////////////////////////////////////////////////////////////////////////////SETTERS AND GETTERS///////////////////////////////////////////////
public:
//////////////////////////// Name getter and setter /////
void setName(const string newName){
    this->name = newName;
}
const string getName() const{
    return this->name;
}
//////////////////////////// Name getter and setter /////
//////////////////////////// Student ID getter and setter /////

void setStudentID(const int newID){
    this->studentID = newID;
}
const int getStudentID() const{
    return this->studentID;
}

//////////////////////////// Student ID getter and setter /////
//////////////////////////// Programme getter and setter /////
void setProgramme(const string newProgramme){
    this->programme = newProgramme;
}
const string getProgramme() const{
    return this->programme;
}
//////////////////////////// Programme getter and setter /////
//////////////////////////// Level getter and setter /////

void setLevel(const int newLevel){
    this->level = newLevel;
}
const int getLevel() const{
    return this->level;
}

//////////////////////////// Level getter and setter /////

//////////////////////////////////////////////////////////////////////////////// BEHAVIORS ///////////////////////////////////////////
///////////////////////// Register Course //////////////////////////////

void registerCourse(string course){
    cout << this->name << " registered " << course << endl;
}
///////////////////////// Register Course //////////////////////////////
///////////////////////// Update Programme //////////////////////////////

void updateProgramme(string newProgramme){
    this->programme = newProgramme;
    cout << this->name << " updated programme to " << this->programme << endl;
}
///////////////////////// Update Programme //////////////////////////////
///////////////////////// Display //////////////////////////////
    void displayDetails() const{
        cout << "\n\nStudent details:\n\n" << "Name: " << this->name << "\nStudent ID: " << this->studentID << "\nProgramme: " << this->programme << "\nLevel: " << this->level << "\n" << endl;
    }
///////////////////////// Display //////////////////////////////

};

int main(){
    int studentID, level;
    string name, programme, course, newProgramme;

cout << "Enter Student Details\n -------------------------" << endl;
cout << "Name: " << endl;
cin >> name;
cout << "Student ID: " << endl;
cin >> studentID;
cout << "Programme: " << endl;
cin >> programme;
cout << "Level: " << endl;
cin >> level;
cout << "Course to register: " << endl;
cin >> course;
cout << "New programme: " << endl;
cin >> newProgramme;

Student student;
student.setName(name);
student.setStudentID(studentID);
student.setProgramme(programme);
student.setLevel(level);
student.displayDetails();
student.registerCourse(course);
student.updateProgramme(newProgramme);
student.displayDetails();
    return 0;
}