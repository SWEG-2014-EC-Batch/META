#include <iostream>
using namespace std;
#include <ctype.h>

int main () {
  int Weight;
  char Gender;
  float Height, BMI;


cout<<"Please specify your gender\n Enter the number F if you're female and M if you're male : ";
cin>>Gender;



if (Gender=='F') 
{
    cout<<"You're a female\n";
    cout<<"Enter you weight :";
    cin>>Weight;
    cout<<"Enter your height :";
    cin>>Height;
    BMI = Weight/(Height*Height);
    if (BMI<= 23 && BMI>= 18) {
        cout<<"You have a BMI of "<<BMI<<" and you are healty, congratulations";}
           else{cout<<"You have a BMI of "<<BMI<<" but unfortunately, you're unhealty"; }
        }
      
      
      
       else if (Gender=='M') {
        cout<<"You're a male\n";
    cout<<"Enter you weight :";
    cin>>Weight;
    cout<<"Enter your height :";
    cin>>Height;
    BMI = Weight/(Height*Height);
    if (BMI<= 25 && BMI>= 20) {
        cout<<"You have a BMI of "<<BMI<<"and you are healty, congratulations";}
        else{
            cout<<"You have a BMI of "<<BMI<<"but unfortunately, you're unhealty";}} 
 return 0;      }