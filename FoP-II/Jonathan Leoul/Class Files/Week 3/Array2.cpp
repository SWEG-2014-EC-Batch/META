#include<iostream>
#include<ctype.h>
using namespace std;

void vowel(char list[],int size);

int main(){
char*ptr; int size;
cout<<"Second array(string) exercise\n\n Enter the length of your string: ";

cin>>size;
cout<<"Enter your string: ";
cin.ignore();
cin.getline(ptr,size+1);
vowel(ptr,size);

}
void vowel(char list[],int size){
    for (int i=0;i<size;i++){
        if(list[i]=='a'|| list[i]=='e'|| list[i]=='i'|| list[i]=='o'|| list[i]=='u')
        cout<<i<<" th element is the vowel "<<list[i]<<endl;
        else cout<<i<<" th element is the consonant "<<list[i]<<endl;
    }
}