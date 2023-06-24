#include<iostream>
using namespace std;
void length_wrd(char word[],int size){
int size1,vowel,cons;
size1=0;
vowel=0;
cons=0;
for(int i=0;word[i]!='\0';i++){
size1++;
}
for(int i=0;i<size;i++){
if((word[i]>='A' && word[i]<='Z')||(word[i]>='a' && word[i]<='z')){
if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='O'||word[i]=='I'||word[i]=='U'){
vowel++;
}
else{cons++;}

}
}
cout<<"the size of the string is: "<<size1<<endl;
cout<<"the number of vowels is: "<<vowel<<endl;
cout<<"the number of consonant: "<<cons<<endl; 

}