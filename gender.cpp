#include <iostream>
using namespace std;

int main() {

    string gender;
    cout << "What's your gender" << endl;
    cin >> gender;
    gender = gender;

    if (gender == "M" || gender == "m" || gender == "Male" || gender == "male"){
        cout << "Hello, Sir!" << endl;
    } else if (gender == "F" || gender == "Female" || gender == "f" || gender == "female") {
        cout << "Hello, Madam " << endl;
    }
    else{
        cout << "Invalid" << endl;
    }
    return 0;
}