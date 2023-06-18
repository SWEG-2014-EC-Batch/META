#include <iostream>
using namespace std;

void calcQuotient(double n1, double n2, double &answer); 

int main () {
 double num1=5,num2=2;
 double quotient=10;
cout<<"Enter two numbers respectively to divide the first number with the second: ";
cin>>num1>>num2;

calcQuotient(num1,num2,quotient);
cout<<endl<<quotient;
    return 0;
}
void calcQuotient(double n1, double n2, double &answer){
answer=n1/n2;

}