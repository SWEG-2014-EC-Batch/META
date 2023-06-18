#include <iostream>
using namespace std;

double max(double num1, double num2);
double max(double num1, double num2, double num3);

int main () {
double a,b,c;
max(a,b);
max(a,b,c);

}

double max(double num1, double num2){
cout<<"Input number: ";
cin>>num1>>num2;
cout<<endl<<num1<<endl<<num2;

}
double max(double num1, double num2, double num3){
    cout<<"Input 3 numbers :";
    cin>>num1>>num2>>num3;
cout<<num1<<endl;
cout<<num2<<endl;
cout<<num3;

}
