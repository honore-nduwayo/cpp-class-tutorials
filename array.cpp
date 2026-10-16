#include <iostream>
using namespace std;

int main(){

int num[]={1,2,3,4,5,6,7,8,9,10};

for(int i=0;i<10;i++){

        if(num[i]==1){cout << num[i] << "st" << endl;}
        else if(num[i]==2){cout << num[i] << "nd" << endl;}
        else if(num[i]==3){cout << num[i] << "rd" << endl;}
        else{cout << num[i] << "th" << endl;}
    };


    return 0;
}



