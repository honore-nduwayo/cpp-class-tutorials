#include <iostream>
using namespace std;




void suffix(int choice){

if (choice > 0 && choice <=10){

switch (choice)
{
case 1:
    cout << choice << "st"<< endl;
    break;
case 2:
    cout << choice << "nd" << endl;
    break;
case 3:
    cout << choice << "rd" << endl;
    break;
default:
    cout << choice << "th" << endl;
    break;
}

}

else{
    cout << "Out of Bounds " <<endl;
}


}








int main(){
int choice;
cout << "Enter your input between 1 and 10"<< endl;
cin >> choice;
suffix(choice);
    return 0;
}