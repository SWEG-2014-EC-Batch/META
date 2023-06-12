#include<iostream>
#include<memory>
using namespace std;
int main() {
    unique_ptr<int> ptr1(new int);
    *ptr1 = 100;
    //cout<<ptri<<end!;
    cout<<"Address 1: "<<ptr1.get() <<endl;
    cout<<"Value : "<< *ptr1<<endl;

    //int *ptr2 = ptr1;  //cannot copy
    unique_ptr<int> ptr2;
    ptr2 = move(ptr1); //transfer ownership
    ptr1.reset(); //reset pointer to null
    cout<<"\nAddress 2: "<<ptr2.get()<< endl;
    cout<<"Value : "<< *ptr2<<endl;

    unique_ptr<int> ptr3(ptr2.release());  //transfer ownership
    cout<<"\nAddress 3: "<<ptr3.get()<< endl;
    cout<<"Value: "<< *ptr3<<endl;
    ptr2.reset(ptr3.release());  //transfer ownership and destroy pointer
    unique_ptr<int[]> ptr4(new int[5]);  //unique_ptr to array object
    cout<<endl;
    for (int i =0; i<5; i++){
        cout<<"Enter "<<i+1<<" array element ";
        cin>>ptr4[i];
    }

    cout<<"\n \n Array Elements are: ";
    for (int i =0; i<5; i++){  cout<<ptr4[i]<<", "; }
    cout<<endl;
}

