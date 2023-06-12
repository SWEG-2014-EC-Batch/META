#include<iostream>
using namespace std;
bool leap_year(int year);
int main(){
    int year;
    cout<<"enter the year: ";
    cin>>year;
    if(leap_year(year)){
        cout<<"the year is leap year"<<endl;
    }
    else{
        cout<<"the year is not leap year"<<endl;
    }
    return 0;
}
bool leap_year(int year){
    if((year%4==0&&year%100!=0)||year%400==0){
        return true;
    }
    else{
        return false;
    }
}
