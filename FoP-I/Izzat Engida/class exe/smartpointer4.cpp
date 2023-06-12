#include<iostream>
#include<memory>
using namespace std;
int main()
{
weak_ptr<int> ptr1;{
shared_ptr<int> ptr2 = make_shared<int>(53); 
ptr1 = ptr2;}

shared_ptr<int> ptr3= ptr1.lock();
cout<<"Address: "<<ptr3.get()<<endl;
cout<<"Value: "<<*ptr3<<endl;}