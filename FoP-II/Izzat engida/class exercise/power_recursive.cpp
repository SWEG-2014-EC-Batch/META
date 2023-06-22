#include<iostream>
#include<cmath>
using namespace std;
int power(int num,int po);
int main(){
    int num,po;
    cout<<"enter the number: ";
    cin>>num;
    cout<<"enter the power: ";
    cin>>po;
    cout<<"it power is: "<<power(num,po);
    
}
int power(int num,int po){
    if(po==1){
        return num;
    }
    else{
        return num*power(num,po-1);
    }
}
