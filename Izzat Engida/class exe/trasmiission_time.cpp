#include<iostream>
#include<cmath>
using namespace std;
int main(){
float time,size;
cout<<"enter the file size in MB: ";
cin>>size;
time=(size*1024*1024)/960;
int timedays=time/360*24;
cout<<"it takes: "<<timedays<<" days "<<"to transfer "<<size<<" MB"<<endl;
return 0;}