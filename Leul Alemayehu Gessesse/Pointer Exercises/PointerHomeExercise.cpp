#include <iostream>
int main(){
    int i = 5, j = 10;
    int *ptr, **pptr;
    ptr = &i;
    pptr = &ptr;
    *ptr = 3;
    **pptr = 7;   
    ptr = &j;
    **pptr = 9;
    *pptr = &i;
    *ptr = - 2;
    std::cout << i << " " << j << " " << ptr << " " << pptr;
}