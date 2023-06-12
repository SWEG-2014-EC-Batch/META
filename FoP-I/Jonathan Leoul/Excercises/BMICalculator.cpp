#include <iostream>
using namespace std;
#include <ctype.h>
#include <string>
#include <sstream>

int main () {
  int Weight,x,Menu,n;
  float Height, BMI;
  char Gender;
  string Name;
  cout<<"**************************************************\n";
cout<<"Welcome to the BMI calculator program\n"<<" Inset 1 to calculator the BMI for a single person, Insert 2 to calculator the BMI of N number of people and Inert 3 to calculate the BMI of unknown number of people :";
cin>>Menu;
cout<<"You inserted "<< Menu;

// MENU 1
if (Menu==1){
  cout<<"\n**********************************************\n";
  cout<<"\nWelcome to the BMI calculator program for a single person\n"<<"Insert the name of the person: ";
cin>>Name;

cout<<"Please specify the gender of "<<Name<<"\n Enter the number F if you're female and M if you're male : ";
cin>>Gender;
if(islower(Gender)){
    Gender = toupper(Gender);
}


if (Gender=='F') 
{
    cout<<Name<< " is a female\n";
    cout<<"Enter her weight :";
    cin>>Weight;
    cout<<"Enter her height :";
    cin>>Height;
    BMI = Weight/(Height*Height);
    if (BMI<= 23 && BMI>= 18) {
        cout<<Name<<" has a BMI of "<<BMI<<" and is healty relative to the female standard, congratulations";}
           else{cout<<Name<<" has a BMI of "<<BMI<<" but unfortunately, she's unhealty relative to the female standard"; }
        }
      
      
      
       else if (Gender=='M') {
        cout<<Name<< " is a male\n";
    cout<<"Enter his weight :";
    cin>>Weight;
    cout<<"Enter his height :";
    cin>>Height;
    BMI = Weight/(Height*Height);
    if (BMI<= 25 && BMI>= 20) {
        cout<<Name<< " has a BMI of "<<BMI<<" and he is healty relative to the male standard, congratulations";}
        else{
            cout<<Name<<"vhas a BMI of "<<BMI<<" but unfortunately, he's unhealty relative to the male standard";}} }
            
            // MENU 2


            else if (Menu==2) {

               cout<<"\n**********************************************\n";
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
cout<<"\nPlease specify the gender\n Enter the number F if she's female and M if he's male : ";
cin>>Gender;
if (islower(Gender)) {
  Gender = toupper(Gender);
}
if (Gender== 'F') 
{// Female Menu

    cout<<Name<<" is a female\n";
    cout<<"Enter her weight :";
    cin>>Weight;
    cout<<"Enter her height :";
    cin>>Height;
    BMI = Weight/(Height*Height);

    //Calculation phase for Females
    if (BMI<= 23 && BMI>= 18) {
        cout<<Name<<" has a BMI of "<<BMI<<" and she is, luckily, healty interms of the fememale standard, congratulations";}
           else{cout<<Name<<" has a BMI of "<<BMI<<" but unfortunately, she's unhealty in terms of the female standard"; }
        }

      //Male menu 
      else if (Gender=='M') {
       
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

            }


            
          // MENU 3
            else if(Menu==3)
            {
               cout<<"\n**********************************************\n";
cout<<"\nWelcome to the BMI calculator\n";

//Beginning of general loop
for (x=1;x!=0;) {

cout<<"\nWhat's the name of the person :";
cin>>Name;
cout<<"\nPlease specify the gender\n Enter the number F if she's a female and M if he's male : ";
cin>>Gender;
if(islower(Gender)) {
Gender = toupper(Gender);
}

if (Gender== 'F') 
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
      else if (Gender=='M') {
       
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

            }
 return 0;      
}













