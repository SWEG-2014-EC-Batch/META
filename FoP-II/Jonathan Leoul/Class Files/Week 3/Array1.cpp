#include <iostream>
using namespace std;

int array(int list[], int size);
int main ( ) {

int list[]={},length,*ptr;
cout<<"First array function excercise \n\nEnter the size of your array: ";
cin>>length;

cout<<"Print size of array: "<<length<<endl;
for(int i=0;i<length;i++){
    cout<<"Enter the "<<i+1<<"th element: ";
    cin>>*(ptr+i); cout<<endl;

}
array(ptr,length);


    return 0;
}
int array(int list[], int size){
cout<<"First element = "<<*list<<endl;
cout<<"Last element = "<<*(list+(size-1))<<endl;

cout<<"Sum of the elements = "<<*list+*(list+(size-1));

}
