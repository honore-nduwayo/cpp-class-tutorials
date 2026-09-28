#include <iostream>
using namespace std;

struct Student{
    string name;
    string course;
    int ID;

    void details(){
        cout << "Student details\n" << "Name:" << name << "\nCourse: " << course << "\nID: " << ID << "\n" << endl;
    }

//////////////////////////// name getter and setter /////
void setName(string newName){
    this->name = newName;
}
string getName(){
    return this->name;
}
//////////////////////////// name getter and setter /////

//////////////////////////// ID getter and setter /////

void setID( int newID){
    this->ID = newID;
}
int getID(){
    return this->ID;
}

//////////////////////////// ID getter and setter /////

//////////////////////////// Course getter and setter /////
void setCourse(string newCourse){
    this->course = newCourse;
}
string getCourse(){
    return this->course;
}
//////////////////////////// Course getter and setter /////

};

int main(){
    int ID;
    string name, course;

    while(1){
cout << "Enter Student Details\n--------------------------------------------------\n--------------------------------------------------" << endl;
cout << "Name: " << endl;
cin >> name;
cout << "Course: " << endl;
cin >> course;
cout << "ID: " <<endl;
cin >> ID;
Student student;
student.setName(name);
student.setCourse(course);
student.setID(ID);
student.details();
    }
    return 0;
}