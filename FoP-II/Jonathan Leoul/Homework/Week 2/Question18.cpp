#include <iostream>
using namespace std;

void Discout_Function(double &Price,double Discount,bool Check);

int main (){
double Initial ,DiscRate;
bool PercFix;
cout<<"Welcome to the price discount calculator program"<<endl<<"Enter the initial price of your item: ";
cin>>Initial;
cout<<endl<<"Enter the discout of your item: "; cin>>DiscRate;
if(DiscRate<0){
    cout<<endl<<"Negative discount isn't allowed ";
   exit(0);
}

cout<<endl<<"Enter \"1\" if your discount is in percentage or \"0\" if your discount is in value: ";
cin>>PercFix;
cout<<"Initial price = "<<Initial<<endl;
Discout_Function(Initial,DiscRate,PercFix);
cout<<"Price after Discount = "<<Initial;

    return 0;
}
void Discout_Function(double &Price,double Discount,bool Check){
    if(Check){
         Price=Price*(Discount/100);
         if(Price==0){
            cout<<endl<<"Final price can't be \"0\"";
        exit(0);
         }
    } else{
        if(Price>Discount){
        Price=Price-Discount;}
        else{
            cout<<endl<<"Discount value can't be greater or equal to inital Price";
            exit(0);
        }
    } 
}