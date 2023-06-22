#include<iostream>
using namespace std;
long long int fib(int num);

int main(){
    int num;
    cout<<"enter the nth number you want to find: ";
    cin>>num;
    cout<<fib(num);
}
long long int fib(int num){
    if(num==1||num==0){
        return num;
    }
    else{
        return fib(num-1)+fib(num-2);
    }
}
