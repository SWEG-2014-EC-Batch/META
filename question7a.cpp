/*a code to find sum,sub,mul*/
#include<iostream>
using namespace std;
int main()
{ float sum,div,sub,mul,a,b;
cout<<"please enter the first number: ";
cin>>a;
cout<<"please enter the second number: ";
cin>>b;
sum=a+b;
sub=a-b;
div=a/b;
mul=a*b;
cout<<"the sum of "<<a<<" + "<<b<<"="<<sum<<endl;
cout<<"the difference of"<<a<<"-"<<b<<"="<<sub<<endl;

cout<<"the multiplication of"<<a<<"*"<<b<<"="<<mul<<endl;
cout<<"the division of"<<a<<"/"<<b<<"="<<div<<endl;

    return 0;
}