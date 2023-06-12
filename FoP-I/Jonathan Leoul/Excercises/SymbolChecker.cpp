#include <iostream>
#include <ctype.h>
using namespace std;

int main () {
    int x;
    char Input;
    cout<<"Welcome to the character checker program!\n";
    cout<<"This program will tell you the type of character you insert from your keyboard\n";

for (x=1;x!=0;) {
cout<<"Enter the character you want to check from your keyboard : ";
cin>>Input;

if (isalpha(Input)) {
    // Check wheter or not the alphabet is an upper case letter or lower case letter
if (islower (Input)){

switch (Input){
case 'a': 
case 'e': 
case 'i': 
case 'o': 
case 'u': cout<<"The character "<<Input<<" is a small lettered vowel";break;
default : cout<<"The character "<<Input<<" is a small lettered consonant";break;
};}
else {
switch (Input){
case 'A': 
case 'E': 
case 'I': 
case 'O': 
case 'U': cout<<"The character "<<Input<<" is a captial lettered vowel";break;
default : cout<<"The character "<<Input<<" is a capital lettered consonant";break;
}

}}

//Alphabetic section ends}

//Beginning of the Digit / Symbol checking phase

//Digit checker phase
else if (isdigit(Input) && Input%2==0) {
cout<<"The character "<<Input<<" is an even digit";
}else if(isdigit(Input && Input%2!=0)){
    cout<<"The character "<<Input<< " is an odd digit";
}
   
//Special character checker phase
else {cout<<"The character "<<Input<<" is a special symbol";}

//Looping Switch to restart the program
cout<<"\nInput 1 if you would like to continue and 0 if you would like to terminate the program :";
cin>>x;
if(x==0){
break;}

}

    return 0;
}
