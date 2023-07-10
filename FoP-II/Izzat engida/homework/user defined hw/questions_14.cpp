#include<iostream>
#include<cmath>
using namespace std;
class triangle{
    public:
    int side1,side2,side3;
    double area(){
        double side= side1+side2+side3;
        return sqrt(side*(side-side1)*(side-side2)*(side-side3));
    }
    int perimeter(){
        return side1+side2+side3;
    }

};
int main(){
    triangle input;
    input.side1=3;
    input.side2=4;
    input.side3=5;
    cout<<"area is: "<<input.area()<<endl;
    cout<<"perimter is: "<<input.perimeter()<<endl;
}