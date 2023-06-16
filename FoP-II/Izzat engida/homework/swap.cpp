#include<iostream>
using namespace std;
void swap_value(int&,int&,int&);
int main(){
int num1,num2,num3;
cout<<"enter the numbers: ";
cin>>num1>>num2>>num3;
cout<<"numbers before swap "<<endl;
cout<<"first number: "<<num1<<endl;
cout<<"second number: "<<num2<<endl;
cout<<"third number: "<<num3<<endl;
cout<<endl<<"numbers after the swap"<<endl;
swap_value(num1,num2,num3);
cout<<"first number: "<<num1<<endl;
cout<<"second number: "<<num2<<endl;
cout<<"third number: "<<num3<<endl;
}
void swap_value(int& n1,int& n2,int& n3){
if(n1<n2){swap(n1,n2);}
if(n1<n3){swap(n1,n3);}
if(n2<n3){swap(n2,n3);}

}