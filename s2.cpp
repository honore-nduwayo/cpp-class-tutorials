#include <iostream>
using namespace std;




void suffix(int choice){

if (choice >20){
    choice = choice % 10;
}

switch (choice)
{
case 1:
    cout << "st"<< endl;
    break;
case 2:
    cout <<"nd" << endl;
    break;
case 3:
    cout << "rd" << endl;
    break;
case 11:
    cout << "th" << endl;
    break;
case 12:
    cout << "th" << endl;
    break;
case 13:
    cout << "th" <<endl;
    break;
case 14:
    cout  << "th" << endl;
    break;
case 15:
    cout  << "th" << endl;
    break;
case 16:
    cout  << "th" << endl;
    break;
case 17:
    cout  << "th" << endl;
    break;
case 18:
    cout  << "th" << endl;
    break;
case 19:
    cout<< "th" << endl;
    break;
default:
    cout << "th" << endl;
    break;
}
}

int main(){
int choice;
cout << "Enter your input between 1 and 10"<< endl;
cin >> choice;
cout <<choice;
suffix(choice);
    return 0;
}