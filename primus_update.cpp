#include<iostream>
#include<cmath>
using namespace std;
bool prime(int num);
void composite(int num);
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int sum=0,count=0;
   if(prime(num)){
    cout<<"the number is prime" <<endl;
    cout<<"prime numbers less or equal to "<<num<<" are: ";
        for(int i=1;i<=num;i++){
             if(prime(i)){
            cout<<i<<", ";
            sum+=i;
            count++;
        }
    }
    float ave=float(sum)/count;
    cout<<endl<<endl<<"average of the prime numbers: "<<ave<<endl;}
else{
    for(int i=2;i<=num;i++){
        if(prime(i)){
            if(num%i==0){
                cout<<i<<", ";
            }
        }
    }
}return 0;
}
bool prime(int num){
    int count=0;
    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){count++;}
    }
    if(count==1){
        return true;
    }
}
void composite(int num){
    for(int i=1;i<=num;i++){
        if(prime(i)){
            if(num%i==0){
                cout<<i<<", ";
            }
        }
    }
}
