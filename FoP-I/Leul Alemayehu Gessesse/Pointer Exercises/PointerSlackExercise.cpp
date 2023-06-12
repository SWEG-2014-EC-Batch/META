#include <iostream>
using std::cout;
using std::endl;
int main(){
    int num = 100;
    int *ptr = &num;
    cout << num << endl;
    cout << &num << endl;
    cout << num << " " << *ptr << endl;
    cout << &ptr << endl;
    *ptr = 0;
    //the above pointer redeclaration was a bug because it said int *ptr = 0;
    cout << ptr << endl;
}