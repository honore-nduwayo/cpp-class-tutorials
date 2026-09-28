#include <iostream>

int main(){
std::string gender;
int number = 2;
int guess;
// Code starts here
std::cout << "What's your gender" << std::endl;
    std::cin >> gender;

    if (gender == "M" || gender == "m" || gender == "Male" || gender == "male"){
        std::cout << "Hello, Sir!" << std::endl;
    } else if (gender == "F" || gender == "Female" || gender == "f" || gender == "female") {
        std::cout << "Hello, Madam " << std::endl;
    }
    else{
        std::cout << "Invalid" << std::endl;
    }
std::cout << "Guess then number" << std::endl;

while (1) {
std:: cin >> guess; // scanf("%s", &guess);
if (guess == number){
    std::cout << "Congrats" << std::endl;
    break;
}
else
    std::cout << "Try again! " << std::endl;
}
    return 0;
}