#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a positive number" << endl;
    cin >> choice;

    int n = choice % 100;   // 111 -> 11, 213 -> 13, 101 -> 1
    if (n > 20) {
        n = n % 10;         // 21 -> 1, 45 -> 5
    }

    cout << choice;
    switch (n) {
        case 1:  cout << "st" << endl; break;
        case 2:  cout << "nd" << endl; break;
        case 3:  cout << "rd" << endl; break;
        default: cout << "th" << endl; break;
    }

    return 0;
}