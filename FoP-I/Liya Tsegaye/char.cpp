#include <iostream>
#include <ctype.h>

using namespace std;

int main ()
{
  char ch;

  cout << "Enter your character:";
  cin >> ch;
  if (isalpha(ch)){
   if (isupper(ch)){
    switch(ch) {
case 'A': 
case 'E':
case 'I':
case 'O':
case 'U': cout << "Your character" << ch <<" is an uppercase vowel"; break;
default : cout <<"Your character" <<ch << "  is an uppercase consonant";
    }
    } else if(islower(ch)){
      switch(ch) {
case 'a': 
case 'e':
case 'i':
case 'o':
case 'u': cout << "Your character" << ch <<" is a lowercase vowel"; break;
default : cout <<"Your character" <<ch << "  is a lowercase consonant";}
    
  } if(isdigit(ch)){
    switch(ch%2){
      case 0 : 
      cout << "Your character " << ch << " is an even number";
      break;
      case 1:
      cout << "Your character " << ch << "is an odd number";

    }
    } 
  }else cout << "Your character" << ch << "is a special character";
    return 0;
 }
