#include<iostream>
#include<string>
using namespace std;

struct employee{
    string name;
    int number,hours;
    float rate,gross,net;
};

void input();
void calc(employee[],int);
void output(employee[],int);

int main(){
    input();
}

void input(){
    employee info[4] = {
        {"jones",3462,40,4.62},
        {"robb",6793,38,5.83},
        {"swain",7834,40,6.89},
        {"will",9002,42,4.75}
    };
    
    for(int i=0;i<4;i++){
        cout<<"Enter gross pay for "<<info[i].name<<endl;
        cout<<"Gross pay: ";
        cin>>info[i].gross;
    }
    
    calc(info,4);
}

void calc(employee info[],int size){
    for(int i=0;i<4;i++){
        if(info[i].hours>40){
            info[i].net=info[i].gross-((40*info[i].rate)+((info[i].hours-40)*1.5*info[i].rate));
        }
        else{
            info[i].net=info[i].gross-(info[i].rate*info[i].hours);
        }
    }
    
    output(info,size);
}

void output(employee info[],int size){
    cout<<"Name     \t      ID\t     Rate of Pay\t     Gross Pay\t    Net Pay"<<endl;
    
    for(int i=0;i<4;i++){
        cout<<info[i].name<<"\t\t      "<<info[i].number<<"\t\t"<<info[i].rate<<"\t\t\t"<<info[i].gross<<"\t\t"<<info[i].net<<endl;
    }
}
