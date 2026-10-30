//// LAB 1: STUDENT INFORMATION SYSTEM (PROCEDURAL  TO  OOP)
// Honoré Nduwayo 10012500060

#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    string studentName;
    int studentID;
    double mark;

//////////////////////////////////////////////////////////////////////////////////////////////SETTERS AND GETTERS///////////////////////////////////////////////
public:
//////////////////////////// Name getter and setter /////
void setStudentName(const string newName){
    this->studentName = newName;
}
const string getStudentName() const{
    return this->studentName;
}
//////////////////////////// Name getter and setter /////
//////////////////////////// ID getter and setter /////

void setStudentID(const int newID){
    this->studentID = newID;
}
const int getStudentID() const{
    return this->studentID;
}

//////////////////////////// ID getter and setter /////
//////////////////////////// Mark getter and setter /////

void setMark(const double newMark){
    this->mark = newMark;
}
const double getMark() const{
    return this->mark;
}

//////////////////////////// Mark getter and setter /////

//////////////////////////////////////////////////////////////////////////////// BEHAVIORS ///////////////////////////////////////////
///////////////////////// Display //////////////////////////////
    void displayStudent() const{
        cout << "\n\nStudent details:\n\n" << "Student Name: " << this->studentName << "\nStudent ID: " << this->studentID << "\nMark: " << this->mark << "\n" << endl;
    }
///////////////////////// Display //////////////////////////////

};

int main(){
    //// first object (same data as the procedural program)
    Student student1;
    student1.setStudentName("Ama Mensah");
    student1.setStudentID(2026001);
    student1.setMark(78.5);
    student1.displayStudent();

    //// second object (shows that one class can create many students)
    Student student2;
    student2.setStudentName("Kwame Boateng");
    student2.setStudentID(2026002);
    student2.setMark(85.0);
    student2.displayStudent();

    return 0;
}