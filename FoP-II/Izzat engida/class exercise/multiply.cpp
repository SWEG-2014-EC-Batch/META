#include<iostream>
using namespace std;
float mul();
int main(){

cout<<"the multiplication is: "<<mul();
    return 0;
}
float mul(){
float num1,num2;
cout<<"enter the first number: ";
cin>>num1;
cout<<"enter the second number: ";
cin>>num2;
    return num1*num2;
}
