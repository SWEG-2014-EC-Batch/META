

#include <iostream>
#include <ctype.h>

using namespace std;

int main () {
char A, B;

cout<<"Insert Letter for Conversion ";
cin>> A;

if (islower (A)) {
    B = toupper (A);
        cout<<"Upper case verion = "<<B;}

else if (isupper (A)) {
B = tolower (A);
cout<<"Lower case version = "<<B;
}
return 0;
}


