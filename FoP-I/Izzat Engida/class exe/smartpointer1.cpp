#include<iostream>
#include<memory>
using namespace std;
int main(){
    unique_ptr<int> ptr1(new int);
    *ptr1=100;
    cout<<"address 1: "<<ptr1.get()<<endl;
    cout<<"value: "<<*ptr1<<endl;
    unique_ptr<int>ptr2;
    ptr2=move(ptr1);
    ptr1.reset();
    cout<<"\naddress 2: "<<ptr2.get()<<endl;
    cout<<"value: "<<*ptr2<<endl;
    unique_ptr<int> ptr3(ptr2.release());
    cout<<"\n address 3: "<<endl;
    cout<<"value: "<<*ptr3<<endl;
    ptr2.reset(ptr3.release());
    unique_ptr<int[]>ptr4(new int[5]);
    cout<<endl;
    for(int i=0;i<5;i++){
        cin>>ptr4[i];
    }
cout<<"\n\nArray Elements are: ";
for(int i=0; i<5;i++){cout<<ptr4[i]<<", ";}cout<<endl;
}