#include <iostream>
#include <stdarg.h>

using namespace std;

int prod(int count ...);


int main()
{   
    cout<<prod(3,12,12,5)<<endl;
    cout<<prod(5,2,3,4,6,6)<<endl;
    cout<<prod(8,1,2)<<endl;    //less argument insertion than expected 
    cout<<prod(7,1,2,3,7,8,9,5)<<endl;
    return 0;
}

int prod(int count ...){
   
    int mul=1;
   
    va_list arg;
    va_start(arg, count);
   
    for(int i=1; i<=count; i++)
        mul*=va_arg(arg, int);
   
    va_end(arg);
    return mul;
}