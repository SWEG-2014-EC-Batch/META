#include<iostream>
using namespace std;
struct phone{
int area_code,exchange_code,number;
};
int main(){
    int n;
    cout<<"how many numbers are u going to input: "<<endl;
    cin>>n;
    phone phone1[100];
    phone phone2;
    phone2={212,767,8900};
    for(int i=0;i<n;i++){
    cout<<"enter the area code: ";
    cin>>phone1[i].area_code; 
    cout<<"enter the exchange code: ";
    cin>>phone1[i].exchange_code;
    cout<<"enter the number: ";
    cin>>phone1[i].number;}

    cout<<"phone number with initial value"<<endl;

    cout<<"("<<phone2.area_code<<")"<<phone2.exchange_code<<"-"<<phone2.number<<endl;
    cout<<endl<<endl;
    cout<<"phone number input "<<endl;
    for(int i=0;i<n;i++){
    
     cout<<"("<<phone1[i].area_code<<")"<<phone1[i].exchange_code<<"-"<<phone1[i].number<<endl<<endl;}
}
