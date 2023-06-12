#include <iostream>
using namespace std;
#include <ctype.h>
#include <string>
#include <sstream>

int main () {
  int Weight,Gender,n,x;
  float Height, BMI;
  string Name;

cout<<"Welcome to the BMI calculator\n";

//Beginning of general loop
for (x=1;x!=0;) {

cout<<"\nWhat's the name of the person :";
cin>>Name;
cout<<"\nPlease specify your gender\n Enter the number 1 if you're female and 2 if you're male : ";
cin>>Gender;

if (Gender== 1) 
{// Female Menu

    cout<<Name<<" is a female\n";
    cout<<"Enter you weight :";
    cin>>Weight;
    cout<<"Enter your height :";
    cin>>Height;
    BMI = Weight/(Height*Height);

    //Calculation phase for Females
    if (BMI<= 23 && BMI>= 18) {
        cout<<Name<<" has a BMI of "<<BMI<<" and she is luckily healty interms of the fememale standard, congratulations";}
           else{cout<<Name<<" has a BMI of "<<BMI<<" but unfortunately, she's unhealty in terms of the female standard"; }
        }

      //Male menu 
      else if (Gender==2) {
       
        //Calculation phase for Males
        cout<<Name<<" is a male\n";
    cout<<"Enter his weight :";
    cin>>Weight;
    cout<<"Enter his height :";
    cin>>Height;
    BMI = Weight/(Height*Height);
    if (BMI<= 25 && BMI>= 20) {
        cout<<Name<<" has a BMI of "<<BMI<<" and he is healty interms of the male standards, congratulations";}
        else{
            cout<<Name<<" has a BMI of "<<BMI<<" but unfortunately, he is unhealthy for male standards";}}
            cout<<"\nInput 1 if you would like to continue and 0 if you would like to terminate the program :";
            cin>>x;
            if(x==0){
                break;
            }
            }
            //End of calculation for both
            cout<<"**********************\n";
            cout<<"You are all done!";
 return 0;      }