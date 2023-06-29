#include <iostream>
#include "headerManip.h"

using namespace std;




int main()
{
    int choose;
    char mad[30], max[30];
  
      
    
    cout<<"\n****** stringManipulator ******\n";
    cout<<"which operation do you want to use ?\n";
    cout<<"\t1. Know the length of a string and number it's vowels and consonants.\n"<<"\t2. Compare two strings. \n"<<"\t3. Reverse a string.\n"<<"\t4. Change a string either to lowercase or uppercase. \n \t=====> ";
    cin>>choose;
    //cin.ignore();
    
    
    
if(choose == 1){  
     cout<<"Enter a word: ";
    cin >> mad;
    cout<<"\tThis string has "<<length(mad)<<" number of characters. \n";
    vwlcons(mad);}
    
if(choose == 2){
    cout<<"Enter two words separated by space: ";
     cin>>mad>>max;
     cout<<  cmpr(mad, max);
                           }
 
if(choose == 3){
    cout<<"Enter a word: ";
    cin >> mad;
    cout<<"The reversed word is " << reverse(mad)<<". ";
                           }
    
if(choose == 4){
    cout<<"Enter a word: ";
	cin>>mad;
	
	int num=length(mad);
	cout<<"\t1. wanna make it all to lowercase OR\n\t2. uppercase ==> ";
	cin>>choose;
	if(choose == 1) cout<< makelwr( mad, num );
	else if (choose == 2) cout<< makeuppr( mad, num ) ;
        
                          }
	
return 0;	
}