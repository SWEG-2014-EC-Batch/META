#include <iostream>

using namespace std;

float mult(float num1, float num2);

int main()
{   
    int num1, num2;
    
    cout<<"Enter two numbers to operate multiplication: ";
    cin>>num1>>num2;
    cout<<num1<<"*"<<num2<<" ="<<mult(num1, num2);
}

float mult(float num1, float num2){return num1*num2;}