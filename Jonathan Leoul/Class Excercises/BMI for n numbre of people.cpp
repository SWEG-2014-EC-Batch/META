#include <iostream>
using namespace std;
#include <ctype.h>
#include <string>
#include <sstream>

int main () {
  int Weight,Gender,n,x;
  float Height, BMI;
  string Name;
  cout<<"\n*********************************\n";
  cout<<"\nWelcome to the BMI calculator program\n";

cout<<"\nInsert the number of people you want to calculate the BMI of :";
cin>>n;
cout<<"\nYou've chosen "<<n<<" people to calculate their BMI index";

//Beginning of general loop
for (x=1;x<=n;x++) {
    
    //BEginning of loop for each person
    for (x=1;x<=n;x++) {
        cout<<"\n**********************************";

        cout<<"\nYou are calculating the BMI of person "<<x;



cout<<"\nWhat's the name of the person :";
cin>>Name;
cout<<"\nPlease specify your gender\n Enter the number 1 if you're female and 2 if you're male : ";
cin>>Gender;

if (Gender== 1) 
{// Female Menu

    cout<<Name<<" is a female\n";
    cout<<"Enter her weight :";
    cin>>Weight;
    cout<<"Enter her height :";
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
            cout<<Name<<" has a BMI of "<<BMI<<" but unfortunately, he is unhealthy for male standards";}}}} 
            //End of calculation for both
            cout<<"**********************\n";
            cout<<"You are all done!";
 return 0;      }