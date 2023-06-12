#include<iostream>

using namespace std;

 
 int main(){
   float mile,capacity;
   cout<<"enter the capacity of the tank: ";
   cin>>capacity;
   cout<<"enter the mile per km of the car: ";
   cin>>mile;
   cout<<"the total number of miles the car will travel is: "<<capacity/mile;
   return 0;
}