#include <iostream>
using namespace std;

int main () {
int num=100;
int *ptr=&num;
cout<<num<<endl;
cout<<&num<<endl;
cout<<num<<""<<*ptr<<endl;
cout<<&ptr<<endl;
*ptr=0;
cout<<*ptr<<endl;
    return 0;
}