#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
char a;
cout<<"enter a chracter: ";
cin>>a;
char g=(a>='a'&& a<='z')? toupper(a):tolower(a);
cout<<g;
  return 0;
}