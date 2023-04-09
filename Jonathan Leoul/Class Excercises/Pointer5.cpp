#include <iostream>
using namespace std;

int main () {
int i=5, j=10, *ptr,**pptr;
ptr=&i; pptr=&ptr;
cout<<*ptr++<<" "<<ptr<<endl;
cout<<*(ptr++)<<" "<<ptr<<endl;
cout<<*++ptr<<" "<<ptr<<endl;
cout<<*(++ptr)<<" "<<ptr<<endl;
cout<<++*ptr<<" "<<ptr<<endl;
cout<<++(*ptr)<<" "<<ptr<<endl;
cout<<(*ptr)++<<" "<<ptr<<endl;
cout<<*ptr;
    return 0;
}