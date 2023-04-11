#include <iostream>
using std::cout;
using std::endl;
int main(){
    int k = 4, *ptr, **ptoptr;
    ptr = &k; 
    ptoptr = &ptr; //initially this line said **ptoptr = &ptr, which was invalid
    cout << "K = " << k << endl; //initially this line mentioned K instead of k
    *ptr = k + 10;
    cout << "x = " << k << endl;
    **ptoptr = *ptr + k;
    cout << "k = " << k << endl;
}