#include <iostream>
using namespace std;

class Rectangle{
private:
float l, w;

public:
void displayArea(float l, float w){
    cout <<"Area: " << l*w <<endl;
}
void displayPerimeter(float l, float w){

    cout <<"Perimeter: " << 2*(l+w) <<endl;
}
};

int main(){
    float l,w;


    cout <<"Enter Lenght l: "<< endl;
    cin>> l;
    cout << "Enter width w: " <<endl;
    cin>> w;
    Rectangle rectangle;
    rectangle.displayArea(l,w);
    rectangle.displayPerimeter(l,w);
    return 0;
}