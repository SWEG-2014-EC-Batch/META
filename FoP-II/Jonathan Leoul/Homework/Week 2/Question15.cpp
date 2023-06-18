#include <iostream>
#include<assert.h>
using namespace std;

void scale(float Factor, float &Value1, float &Value2);

int main (){
   float Scaler, Num1, Num2;
   cout<<"Welcome to the Scale convertor program"<<endl;
   cout<<"Input your number to scale values (Number should be different from zero): ";
cin>>Scaler;
assert(Scaler!=0);
cout<<endl<<"Insert your 2 numbers to be scaled respectively: ";
cin>>Num1>>Num2;
cout<<endl<<"Value 1 before scaling: "<<Num1<<endl<<"Value 2 before scaling: "<<Num2<<endl;
   scaler(Scaler,Num1,Num2);
cout<<"Value 1 after scaling: "<<Num1<<endl<<"Value 2 after scaling: "<<Num2<<endl;

    return 0;
}
void scaler(float Factor, float &Value1, float &Value2){

Value1*=Factor;
Value2*=Factor;


}