#include<iostream>
#include<assert.h>
using namespace std;
void scale(double,double&,double&);
int main(){
    double factor,value1,value2;
    cout<<"enter the scale factor: ";
    cin>>factor;
    assert(factor!=0);
    cout<<endl;
    cout<<"enter the first value: ";
    cin>>value1;
    cout<<"enter the second value: ";
    cin>>value2;
    cout<<endl;
    cout<<"the values before the scaling"<<endl;
    cout<<"value1= "<<value1<<"\nvalue2= "<<value2<<endl;
    scale(factor,value1,value2);
    cout<<endl;
    cout<<"the values after the scaling"<<endl;
    cout<<"value1= "<<value1<<"\nvalue2= "<<value2<<endl;
return 0;

}
void scale(double fac,double& va1,double& va2){
va1*=fac;
va2*=fac;
}