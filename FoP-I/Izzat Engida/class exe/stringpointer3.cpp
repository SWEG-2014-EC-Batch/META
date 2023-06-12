#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char message[20]{"Vacation is near"};
    int length=strlen(message);
    char* strng[20];
    for(int i=0;i<length;i++){
    strng[i]=&message[i];}
    for(int j=0;j<length;j++){
        cout<<*strng[j];
    }
    return 0;
}