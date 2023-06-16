#include<iostream>
#include<assert.h>
using namespace std;
void discount_apply(double& price,double discount,bool percentage);
int main(){
double price,discount;
bool percent;
cout<<"enter the price of the item: ";
cin>>price;
cout<<"enter the discount: ";
cin>>discount;
assert(discount>0);
cout<<"enter 1 if the discount is in percentage and 0 if the discount is in value: ";
cin>>percent;
cout<<endl;
cout<<"price before the discount: "<<price<<endl;
discount_apply(price,discount,percent);
assert(price>0);
cout<<"price after the discount: "<<price<<endl;
}
void discount_apply(double& price,double discount,bool percentage){
    if(percentage){
     double dis=price*(discount/100);
     assert(dis<price);
     price-=dis;
    }else{
        assert(discount<price);
        price-=discount;
    }
}