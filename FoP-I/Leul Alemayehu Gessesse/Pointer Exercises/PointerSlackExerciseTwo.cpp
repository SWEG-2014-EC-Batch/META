#include <iostream>
using std::cout;
using std::endl;
int main(){
    int value1 = 5 , value2 = 15;
    int *p1 , *p2;
    p1 = &value1;
    p2 = &value2;
    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 = 20;
    cout << "value1 = " << value1 << endl;
    cout << "value2 = " << value2 << endl;
    cout << sizeof(p1) << " " << sizeof(*p1) << " " << sizeof(&p1) << endl;
    return 0;
}