#include <iostream>
using namespace std;

int main () {
int rando=5;
int &randoref=rando;
randoref=10;
cout<<rando;

int ptr=5;
int *ptrr=&ptr;
*ptrr=10;
cout<<endl<<"ptr ="<<ptr;
    return 0;
}