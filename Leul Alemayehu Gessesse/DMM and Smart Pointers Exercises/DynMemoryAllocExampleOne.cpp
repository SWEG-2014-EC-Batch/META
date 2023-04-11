#include <iostream>
using namespace std;
int main(){
    float *ptr = new float;
    cout << "Please enter salary ";
    cin >> *ptr;
    cout << "Your salary is: " << *ptr<< endl;
        delete ptr;
    cout<<"\n Value: "<< *ptr <<endl; //print garbage data
    ptr = new float;
    cout<<"Enter mark: ";
    cin>> *ptr;
    cout << "Your mark is: "<< *ptr<<endl;
}
