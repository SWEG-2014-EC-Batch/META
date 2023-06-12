#include <iostream>
using namespace std;

int main () {

char c;
int a;

cout<<"Insert a c to test if it's a character or not :";
cin>>c;
a = c;
(a>=65 && a<=90)? cout<<"It's a capital letter" (a>=97 && a<=122)? cout<<"It's a small letter" : cout<<"It's not a letter";

    return 0;
}