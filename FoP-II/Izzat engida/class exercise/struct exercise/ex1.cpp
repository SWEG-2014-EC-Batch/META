#include<iostream>
using namespace std;
struct student{
string id;
string name;
float test_mark,final_mark;};

int main(){
    int n;
    cout<<"for how many time do you want to enter: ";
    cin>>n;
student marks[100];
for(int i=0;i<n;i++){
cout<<"enter the student name: ";
cin.ignore();
getline(cin,marks[i].name);
cout<<"enter the student id: ";
cin>>marks[i].id;
cout<<"enter the test marks: ";
cin>>marks[i].test_mark;
cout<<"enter the final mark: ";
cin>>marks[i].final_mark;}
cout<<endl<<endl;

cout<<"name\t"<<"id\t"<<"     test mark\t"<<"final\t"<<"final result"<<endl;
for(int i=0;i<n;i++){
cout<<marks[i].name<<"\t"<<marks[i].id<<"\t"<<marks[i].test_mark<<"\t"<<marks[i].final_mark<<"\t"<<marks[i].test_mark+marks[i].final_mark<<endl;}
}
