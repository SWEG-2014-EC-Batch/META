#include<iostream>
#include<cmath>
using namespace std;
double powe[5];
void current(double arr[],int size);
void power(double res[],int size,double arr[]);
void calctotal(double res[],double arr[],double powe[],int size);
int main(){
    double *arr;
    int size;
    double res[5]={16,27,39,56,81};
 current( arr,5);
    power(res,5,arr);
    cout<<endl;
    calctotal(res,arr,powe,5);
}


void current(double arr[],int size){

    cout<<"enter the current: "<<endl;
    for(int i=0;i<5;i++){
        cout<<"current "<<i+1<<": ";
        cin>>arr[i];

    }
}
void power(double res[],int size,double arr[]){ 
cout<<"resistance "<<"current"<<" power"<<endl;
for(int i=0;i<size;i++){
    cout<<res[i]<<"\t     "<<arr[i]<<"\t    "<<res[i]+pow(arr[i],2)<<endl;
 powe[i]=res[i]+pow(arr[i],2);
}
}
void calctotal(double res[],double arr[],double powe[],int size){
    double total[3];
    total[0]={0};
    total[1]={0};
    total[2]={0};
    for(int i=0;i<5;i++){
 total[0]+=res[i];
 total[1]+=arr[i];
 total[2]+=powe[i];
    }
   cout<<"total"<<"\t"<<total[0]<<"\t"<<total[1]<<"\t"<<total[2];
}
