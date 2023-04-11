#include<iostream>
#include<memory>
using namespace std;
int main(){
    shared_ptr<int> ptr1(new int(7));
    shared_ptr<int> ptr2(new int(6));
    cout<<"Address 1: "<<ptr1<<"\nAddress 2: "<<ptr2<< endl;
    //Returns the number of shared_ptrobjects referring to the same managed object.
    cout<<"Shared Objects(ptr1): " << ptr1.use_count() << endl;
    cout<<"Shared Objects(ptr2): "<< ptr2.use_count() << endl;
    //Relinquishes ownership of ptr1 on the object and pointer becomes NULL
    ptr1.reset();
    cout<<"\nAddress 3: "<< ptr1.get() << endl;
    cout<<"Shared Objects: "<< ptr1.use_count() << endl;
    cout<<"Address 4: "<< ptr2.get() << endl;
    cout<<"Shared Objects: "<<ptr2.use_count()<<endl;
    shared_ptr<int> ptr3 (ptr2); //initialize ptr3 with the shared object ptr2
    cout<<"\nAddress 5: "<< ptr2.get() << endl;
    cout<<"Address 6: "<< ptr3.get() << endl;
    cout<<"Shared Objects(ptr3): "<< ptr3.use_count() << endl;
    *ptr3 = 110;
    cout<<"Value: "<< *ptr2<< endl;
    ptr2.reset();
    cout<<"\nAddress 7: " << ptr2.get();
    cout<<"\nAddress 8: " << ptr3.get() << endl;
    cout<<"Shared Objects: "<< ptr3.use_count() << endl;
    //invalid: accessing a pointer that release an object
    *ptr2 = 10; cout << *ptr2<< endl;
    ptr3.reset();
    cout<<"\nShared Objects: "<< ptr3.use_count() << endl;
}