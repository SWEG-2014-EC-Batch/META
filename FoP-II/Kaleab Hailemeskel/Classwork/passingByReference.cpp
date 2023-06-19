#include <iostream>
using namespace std;

void swap(int &num1,int &num2);

int main()
{
    int x,y;
    cout<<"Enter two numbers in sequence: ";
    cin>>x>>y;
    cout<<"Befor swap: \n";
    cout<<"\tNumber_1 = "<<x<<" "<<"Number_2 = "<<y;
    swap(x,y);
    cout<<"\nAfter swap: \n";
    cout<<"\tNumber_1 = "<<x<<" "<<"Number_2 = "<<y;
    return 0;
}

void swap(int &num1,int &num2){
    int helper=num1;
    num1=num2;
    num2=helper;
}