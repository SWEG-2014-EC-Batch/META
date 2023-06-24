#include <iostream>
#include <string>
#include "vowconslen.h"
#include "uppercase.h"
#include "reverse.h"
#include "comp.h"
#include "lower.h"
using namespace std;
int main(){
    

int choice;
cout <<"This is the String manipulation main page.\n Please choose " << endl;
cout << "1. Find the length and, the number of vowel and consonant characters.\n";
cout <<"2. Reverse a String.\n";
cout << "3. Compare to strings.\n";
cout <<"4. Change to lower case.\n";
cout <<"5. Change to upper case.\n";
cin>> choice;

if (choice==1){
   char str[150];
    VowelConsCount(str);
}else if (choice==2){
    char str[150];
    ReverseString(str);
}else if(choice==3){
    string str1, str2;
    compareStrings(str1,str2);
      
} else if(choice==4){
    string str;
   Lowercase(str);
}else if(choice==5){
    string str;
    Uppercase(str);
} else 
cout <<"Error, invalid choice";

}



