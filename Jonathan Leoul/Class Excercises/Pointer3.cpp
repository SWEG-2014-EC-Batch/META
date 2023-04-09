#include <iostream>
using namespace std;

int main () {
int k=4,*ptr,**ptopr;
ptr=&k, ptopr=&ptr;
cout<<"K ="<<k<<endl;
*ptr=k+10;
cout<<"x="<<k<<endl;
**ptopr=*ptr+k;
cout<<"k = "<<k<<endl;

    return 0;
}