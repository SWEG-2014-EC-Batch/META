#include<iostream>
using namespace std;
struct student{
char name[20],sex;
int age;
};
void input();
void output(student,int);
int main(){
input();
}
void input(){
    student info;
    cout<<"enter the student name: ";
    cin.getline(info.name,20);
    cout<<"enter the sex with a single character: ";
    cin>>info.sex;
    cout<<"enter the age: ";
    cin>>info.age;
    output(info,20);
}
void output(student info,int size){
    cout<<"name: ";
for(int i=0;i<20;i++){
    cout<<info.name[i];
}
cout<<endl<<"sex: "<<info.sex<<endl;
cout<<"age: "<<info.age<<endl;
}