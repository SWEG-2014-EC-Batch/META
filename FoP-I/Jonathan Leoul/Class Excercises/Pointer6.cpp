#include <iostream>
using namespace std;

int main () {
int i=5, j=10, *ptr,**pptr;
ptr=&i;
pptr=&ptr;

cout<<ptr+1<<endl;
cout<<ptr+2<<endl;
cout<<ptr-1<<endl;
cout<<ptr-3<<endl;




    return 0;
}