#include <iostream>
#include <string.h>
using namespace std;

int main () {
char Username[]={"Trial"}, Password[]={"Trial"},Input1[]={},Input2[]={};;
gets(Input1);
gets(Input2);
cout<<Username<<endl<<Password;

if (strcmp(Username,Input1)==0){
cout<<endl<<"Correct";

} else {cout<<endl<<"Try again";}

if(strcmp(Password,Input2)==0){
    cout<<endl<<"Correctt again";
} else {cout<<endl<<"Try again";}
    return 0;
}
