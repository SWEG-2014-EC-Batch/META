// Quotient calculator using passing by pointer

#include <iostream>
using namespace std;

void calcQuotient(double n1, double n2, double *n3);

int main()
{
    double num1,num2,num3=0;

    cout<<"Quotient calculator\n"<<"Enter the Dividend and Divisor in sequence: ";
    cin>>num1>>num2;
    calcQuotient(num1,num2,&num3);
    cout<<"Quotient = "<<num3;
    return 0;
}

void calcQuotient(double n1, double n2, double *n3){
    *n3=n1/n2;
}