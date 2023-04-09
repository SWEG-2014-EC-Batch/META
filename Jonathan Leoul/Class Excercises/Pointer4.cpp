#include <iostream>
using namespace std;


int main () {
int i=5,j=10;
int *ptr;
int **pptr;
ptr=&i;
pptr=&ptr;
*ptr=3;
cout<<i;


    return 0;
}