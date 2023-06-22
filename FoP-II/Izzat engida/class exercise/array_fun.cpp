#include<iostream>
using namespace std;
void sum(int num[],int size);

int main(){
int size,*ptr;
cout<<"enter the number of elements you want to enter: ";
cin>>size;
cout<<"enter the numbers "<<endl;
for(int i=0;i<size;i++){
    cout<<"number"<<i+1<<": ";
    cin>>*(ptr+i);
}
sum(ptr,size);
}
void sum(int num[],int size){
    int sum=0;
cout<<"the first element: "<<num[0]<<endl;
cout<<"the last element: "<<num[size-1]<<endl;
cout<<"there sum is: "<<num[0]+num[size-1]<<endl;
for(int i=0;i<size;i++){
    sum+=num[i];
}
cout<<"the sum of the  whole numbers is: "<<sum<<endl;
}
