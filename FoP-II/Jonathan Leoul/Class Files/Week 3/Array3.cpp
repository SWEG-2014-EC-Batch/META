#include <iostream>
#include <math.h>
using namespace std;

void input(double current[], int size);
void computation(double resistance[],double current[],double power[],int size);
void display(double resistance[],double current[],double power[], int size);
void calctotal(double resistance[],double current[],double power[], double total[]);

int main (){
double resistance[]={16,27,39,56,81};
int size = 5;

double current[size]={};
double power[size]={};
double total[3]={0,0,0};

input(current,size);
computation(resistance,current,power,size);
display(resistance,current,power,size);
calctotal(resistance,current,power,total);

    return 0;
}
void input(double current[], int size){
for (int i=0;i<=4;i++){
    cout<<"Enter the "<<i<<"th current: ";
    cin>>current[i];cout<<endl;
}}
void computation(double resistance[],double current[],double power[], int size){
    for(int i=0;i<4;i++){
        power[i]=resistance[i]*pow(current[i],2);
    }
}
void display(double resistance[],double current[],double power[], int size){
cout<<"Resistance\tCurrent\tPower"<<endl;
for(int i=0;i<4;i++){
    cout<<resistance[i]<<"\t"<<current[i]<<"\t"<<power[i]<<"\t"<<endl;
}
}

void caltotal(double resistance[],double current[],double power[], double total[]){

    for(int j=0;j<5;j++){
        total[0]+=resistance[j];
        total[1]+=current[j];
        total[2]+=power[j];
    }
    // cout<<"Total:"<<total[0]<<"\t"<<total[1]<<"\t"<<total[2];
}
