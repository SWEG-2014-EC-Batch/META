//symbol checker
#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    char character;
    cout<<"Would you please enter a charcter from your keyboard: ";
    cin>>character;
    if((character>='a'&& character<='z')|| (character>='A'&& character<='Z')){
       switch (character){
        case 'A'...'Z':
        cout<<character<<": it is an upper case letter and";
        break;
        default:
        cout<<character<<": it is a lower case letter and";
       } switch(character){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': 
            cout <<" a vowel"<<endl;
            break;
        default:
            cout <<" a consonant"<<endl;
            break;
    }
       }
     
    else if(character>='0' && character<='9'){
        string answer=(character%2==0)? ": it is an even number": ": it is an odd number";
        cout<<character<<answer;}
    else{
        cout<<character<<": it is a special symbol";
    }return 0;
    }
