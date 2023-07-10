#include<iostream>
#include<fstream>
using namespace std;
struct student{
string name;
float exam1,exam2,final,homework;
char grade;
float finalmark;
};
void input();
void calc(student[],int);
void output(student[],int);
int main(){
input();
}

void input(){
    student info[20];
    for(int i=0;i<20;i++){
        cout<<"enter studnet "<<i+1<<" info"<<endl;
        cout<<"name: ";
        cin>>info[i].name;
        cout<<"mark of exam 1: ";
        cin>>info[i].exam1;
        cout<<"mark of homework: ";
        cin>>info[i].homework;
        cout<<"mark of exam 2: ";
        cin>>info[i].exam2;
        cout<<"mark of final exam : ";
        cin>>info[i].final;
    }
    calc(info,20);
}
void calc(student info[],int size){
    for(int i=0;i<20;i++){
        info[i].finalmark=(0.2*info[i].exam1)+(0.2*info[i].exam2)+(0.35*info[i].homework)+(0.25*info[i].final);
    }
    for(int i=0;i<20;i++){
        if(info[i].finalmark<=100 && info[i].finalmark>=90){
            info[i].grade='A';
        }
        else if(info[i].finalmark<=89 && info[i].finalmark>=80){
            info[i].grade='B';
        }
        else if(info[i].finalmark<=79 && info[i].finalmark>=70){
            info[i].grade='C';
        }
        else if(info[i].finalmark<=69 && info[i].finalmark>=60){
            info[i].grade='D';
        }
        else if(info[i].finalmark<60){
            info[i].grade='F';
        }
    }output(info,size);
}
void output(student info[],int size){
fstream izzat;
izzat.open("izzats.txt",ios::out|ios::app);
if(izzat.is_open()){
    cout<<"Name\t\tExam1\t\tExam2\t\tHomework\t\tFinal exam\t\t Grade"<<endl;
    izzat<<"Name\t\tExam1\t\tExam2\t\tHomework\t\tFinal exam\t\t Grade"<<endl;
    for(int i=0;i<size;i++){
    cout<<info[i].name<<"\t\t"<<info[i].exam1<<"\t\t"<<info[i].exam2<<"\t\t"<<info[i].homework<<"\t\t\t"<<info[i].final<<"\t\t\t"<<info[i].grade<<endl;
    izzat<<info[i].name<<"\t\t"<<info[i].exam1<<"\t\t"<<info[i].exam2<<"\t\t"<<info[i].homework<<"\t\t\t"<<info[i].final<<"\t\t\t"<<info[i].grade<<endl;
    izzat.close();}
}
}

