#include<iostream>
using namespace std;
struct  person{
    string name,gender;
    int age;
    float weight,height;
};
int main(){
    int n;
    double bmi[100];
    cout<<"how many person are there: ";
    cin>>n;
    for(int i=0;i<n;i++){
person info[100];
cout<<"enter the person name: ";
cin>>info[i].name;
cout<<"enter the person gender: ";
cin>>info[i].gender;
cout<<"enter the persons weight: ";
cin>>info[i].weight;
cout<<"enter the persons height: ";
cin>>info[i].height;
 bmi[i]=info[i].weight/pow(info[i].height,2);}
cout<<"name\t "<<"gender\t "<<"weight\t"<<"height\t"<<"bmi"<<endl;
for(int i=0;i<n;i++){
cout<<info[i].name<<"\t"<<info[i].gender<<"\t"<<info[i].weight<<"\t"<<info[i].height<<"\t"<<bmi[i]<<endl<<endl;}
}
