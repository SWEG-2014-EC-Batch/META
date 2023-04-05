#include <iostream>
using namespace std;
int main(){
int n;
cout << "How many students?";
cin>>n;
int *marks = new int[n];
cout << "Input Grade for Student\n";
for(int i=0; i<n;i++){
cout<<(i+1)<<":";
cin>>marks[i];
}
delete[]marks;
//deallocation of memory pointed by marks
cout<<"1st Mark is: "<<*marks<<endl; //print garbage data
marks = 0; //reset the point to NULL

}