#include <iostream>
using namespace std;
struct Phone{
  int AreaCode,ExchangeCode, PhoneNumber;
  
} P1={212,767,8900},P2;
int main(){
cout <<"Enter area code" << endl;
cin>> P2.AreaCode;
cout <<"Enter exchange code" << endl;
cin>> P2.ExchangeCode;
cout <<"Enter phone number" << endl;
cin>> P2.PhoneNumber;
cout << "Your number is : " <<'('<<P2.AreaCode<< ')'<<'('<<P2.ExchangeCode<< ')'<<'('<<P2.PhoneNumber<< ')'<<endl;
cout <<"My number is: "<<'('<<P2.AreaCode<< ')'<<'('<<P2.ExchangeCode<< ')'<<'('<<P2.PhoneNumber<< ')';

}