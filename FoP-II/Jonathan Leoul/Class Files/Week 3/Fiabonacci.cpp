#include <iostream>
using namespace std;

int Fiabonacci(int n);

int main (){
int n;
cout<<"Enter your desiered Fiabonnaci number: ";

cin>>n;
cout<<"nth element : ";
cout<<Fiabonacci(n);
return 0;

}
int Fiabonacci(int n){
if(n<=2){
    return 1;}
else {
    return Fiabonacci(n-1)+Fiabonacci(n-2);
}}