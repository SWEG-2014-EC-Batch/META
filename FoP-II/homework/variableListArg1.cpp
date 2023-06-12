#include <iostream>
#include <stdarg.h>

using namespace std;

int prod(int count ...);


int main()
{   cout<<"Some trials:\n";
    cout<<"\twhen the counter is 3 and 12, 12, 5 are multiplied to give: "<<prod(3,12,12,5)<<"."<<endl;
    cout<<"\twhen the counter is 5 and 2, 3, 4, 6, 6 are multiplied to give: "<<prod(5,2,3,4,6,6)<<"."<<endl;
    cout<<"\twhen the counter is 8 but 1, 2 are multiplied to give: "<<prod(8,1,2)<<". Due to less argument insertion than expected."<<endl;    //less argument insertion than expected 
    cout<<"\twhen the counter is 7 but 1, 1, 1, 1, 1, 1, 1, 2 are multiplied to give: "<<prod(7,1,1,1,1,1,1,1,2)<<"."<<endl;
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