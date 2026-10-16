#include <iostream>
#include <vector>

int main(){

int choice{0};
int num[]{1,2,3,4,5,6,7,8,9,10};

//request user input
std::cout << "Enter a number (1-10): ";
std::cin >> choice;
if (choice < 0 || choice > 10){
    std::cout<<"wrong input\n";
    return 1;
}

else{
    for(int i = 0; i < 10; i++){

    if (choice == 1){
        std::cout << num[i]<<"st"<<std::endl;}
    else if(choice == 2)
        {std::cout << num[i]<<"nd"<<std::endl;}
    
    else if(choice == 3)
        {std::cout << num[i]<<"rd"<<std::endl;}
    
    else
        {std::cout << num[i]<<"th"<<std::endl;}
    }
}

return 0;
}