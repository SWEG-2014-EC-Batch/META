#include <iostream>
using namespace std;
struct Phone{
  int AreaCode,ExchangeCode, PhoneNumber;
  
} P1={212,767,8900};
struct Person{
 char Name[30];
};
int main(){
   int i;
   Phone P2[10];
   Person P3[10];
 
   for ( i=0;i<10;i++){
cout <<"Enter your name: "<<endl;
cin>>P3[i].Name;
cout <<"Enter area code" << endl;
cin>> P2[i].AreaCode;
cout <<"Enter exchange code" << endl;
cin>> P2[i].ExchangeCode;
cout <<"Enter phone number" << endl;
cin>> P2[i].PhoneNumber;
cout << "Your number is : " <<'('<<P2[i].AreaCode<< ')'<<'('<<P2[i].ExchangeCode<< ')'<<'('<<P2[i].PhoneNumber<< ')'<<endl;}

}
