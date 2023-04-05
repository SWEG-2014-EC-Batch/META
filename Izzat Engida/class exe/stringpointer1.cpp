#include<iostream>

using namespace std;

 
 int main(){ int i;
 float *arr[10],*arrt[10];
   float price[10]{10.62,14.89,13.21,16.55,18.62,9.47,6.58,18.32,12.15,3.98};
 float quantity[10]{4,8.5,6,7.35,9,15.3,3,5.4,2.9,4.8};
 float  mul[10];
 for(int j=0;j<10;j++){
 arr[j]=&price[j];
 arrt[j]=&quantity[j];}
 for(i=0;i<10;i++){
    mul[i]=(*arr[i])*(*arrt[i]);
 } for(int k=0;k<10;k++){
    cout<<mul[k]<<", ";
 }
 
   return 0;
}