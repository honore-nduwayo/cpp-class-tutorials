#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int studentID;
public:
    void setName(string n)
    {
        name = n;
    }
    void setStudentID(int id)
    {
        studentID = id;
    } void display()
    {
        cout << "Name: "
             << name << endl;
        cout << "ID: "
             << studentID << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Ama Mensah";
    s1.studentID = 2026001;
    s1.display();
    return 0;
}