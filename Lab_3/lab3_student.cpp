#include <iostream>
#include <string>

class Student{
    private:
    std::string name;
    int studentID;

//////////////////////////////////////////////////////////////////////////////////////////////SETTERS AND GETTERS///////////////////////////////////////////////
    public:
//////////////////////////// name getter and setter /////
    void setName(const std::string& newName){
        this->name = newName;
    }
    std::string getName() const{
        return this->name;
    }
//////////////////////////// name getter and setter /////
//////////////////////////// studentID getter and setter /////
    void setStudentID(const int newID){
        this->studentID = newID;
    }
    int getStudentID() const{
        return this->studentID;
    }
//////////////////////////// studentID getter and setter /////

//////////////////////////////////////////////////////////////////////////////// BEHAVIORS ///////////////////////////////////////////
///////////////////////// Display //////////////////////////////
    void display() const{
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "ID: " << this->studentID << std::endl;
    }
///////////////////////// Display //////////////////////////////
};

int main(){
    Student s1;

    ///////////////////////// Part A: store data using public setters //////////////////////////////
    s1.setName("Ama Mensah");
    s1.setStudentID(2026001);
    s1.display();
    ///////////////////////// Part A //////////////////////////////

    ///////////////////////// Part C: display using getters //////////////////////////////
    std::cout << "\nStudent Name: " << s1.getName() << std::endl;
    std::cout << "Student ID: " << s1.getStudentID() << std::endl;
    ///////////////////////// Part C //////////////////////////////

    return 0;
}
