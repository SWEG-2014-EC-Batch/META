#include <iostream>
using std::cout;
using std::endl;
int main(){
    int i = 5, j = 10, *ptr, **pptr;
    ptr = &i;
    pptr = &ptr;
    cout << *ptr++ << " " << ptr << endl;
    cout << *(ptr++) << " " << ptr << endl;
    cout << *++ptr << " " << ptr << endl;
    cout << *(++ptr) << " " << ptr << endl;
    cout << ++*ptr << " " << ptr << endl;
    cout << ++(*ptr) << " " << ptr << endl;
    cout << (*ptr)++ << " " << ptr << endl;
}