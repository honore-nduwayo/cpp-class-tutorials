#include <iostream>
using namespace std;

char getgender(){
char gender;
cout << "Enter your Gender, please 'M' or 'F: " << endl;
cin >> gender;
return gender;
}

int main(){
char gender = getgender();
int num1, num2, num3;
int result  = 0;
if (gender == 'M' || gender == 'm'){

for (int i=0; i<=2; i++) {
        cout << "Enter a number num1" << endl;
        cin >> num1;
        cout << "Enter a numbe num 2" << endl;
        cin >> num2;
        cout << "Enter a number num 3" << endl;
        cin >> num3;
}
result = result + (num1+num2+num3)*2; 
cout << "You entered: " << num1 << ", "<< num2<< ", " << num3<< endl;
cout << "Result: "<< result << endl;
}
else if (gender == 'F' || gender == 'f'){

for (int i=0; i<=2; i++) {
        cout << "Enter a number num1" << endl;
        cin >> num1;
        cout << "Enter a numbe num 2" << endl;
        cin >> num2;
        cout << "Enter a number num 3" << endl;
        cin >> num3;
}
result = result + (num1+num2 + num3)*3; 
cout << "You entered: " << num1 << ", "<< num2 << ", " << num3 << endl;
cout << "Result: "<< result << endl;
    
}
    return 0;
}