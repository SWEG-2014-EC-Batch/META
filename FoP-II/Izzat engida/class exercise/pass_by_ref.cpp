#include<iostream>
using namespace std;
void calcQuotient(double n1,double n2,double& n3);
int main(){
    double num1,num2,num3;
    cout<<"enter the first number: ";
    cin>>num1;
    cout<<"number 2: ";
    cin>>num2;
    cout<<"enter the third number: ";
    cin>>num3;
calcQuotient(num1,num2,num3);
cout<<"answer: "<<num3;

}
void calcQuotient(double n1,double n2,double& n3){
    n3=n1/n3;
}
