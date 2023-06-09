#include<iostream>
#include<ctype.h>
#include<cmath>
using namespace std;
bool is_prime(int);
int main(){
    char choice;
    ab:
    int num;
    // to input the number
     cout<<endl<<"enter a number: ";
    cin>>num;
    if(num>1000){cout<<"the number can't be greater than 1000"; goto ab;}
    // if the number is greater than 1000, it will make you to input again
if(is_prime(num)){
    cout<<num<<" is a prime number";

}
else{
    cout<<num<<" is not a prime number";
    }
    cout<<endl<<"Do you want to test another number? "<<endl;
    // to allow multiple input to check
    cout<<"if yes press Y\nif no press N: ";
    cin>>choice;
choice=toupper(choice);
if(choice=='Y')
{goto ab;
}
else if(choice=='N'){return 0;}
}
//a function that checks for prime number
bool is_prime(int num){
    int count=0;
    if(num==1 ){
        return false;
    }
    for(int i=1;i<=sqrt(num);i++){
 if(num%i==0){
    count++;
 }
    }
    if(count==1){
        return true;
    }
    else{
        return false;
    }
}
