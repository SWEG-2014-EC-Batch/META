#include<iostream>
#include<ctype.h>
using namespace std;
void vowel(char[],int size);
int main(){
    int size;
    char *ptr;
    cout<<"enter the number of words you want ot enter: ";
    cin>>size;
    cout<<"enter the words: ";
    cin.ignore();
    cin.getline(ptr,size);
    vowel(ptr,size);
}
void vowel(char word[],int size){
for(int i=0;i<size;i++){
    if(tolower(word[i])=='a'||tolower(word[i])=='e'||tolower(word[i])=='i'||tolower(word[i])=='o'||tolower(word[i])=='u'){
        cout<<word[i]<<" ";
    }
}
}
