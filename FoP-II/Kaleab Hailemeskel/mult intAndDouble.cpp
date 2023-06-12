#include <iostream>
using namespace std;

double getProduct(int, double);

int main(){
    int firstNum;
    double secondNum;
    
    cout <<"Enter the integer number:  ";
    cin>>firstNum;
    cout <<"Enter the double number: ";
    cin>> secondNum;
    cout<<"The product is "<<getProduct(firstNum , secondNum);
}


double getProduct(int num1, double num2){
     double prod = num1*num2; 
    return (prod); }