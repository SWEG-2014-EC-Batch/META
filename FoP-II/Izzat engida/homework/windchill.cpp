#include<iostream>
#include<cmath>
using namespace std;
double windchill(double v,double t);
int main(){
double speed,temperature;
cout<<"enter the speed of the wind in m/s: ";
cin>>speed;
ab:
cout<<"enter the temperature in celisus: ";
cin>>temperature;
if(temperature<10){
cout<<"enter the temperature again and make sure for it to be >=10"<<endl;
goto ab;}

cout<<"the windchill index is: "<<windchill(speed,temperature);
}
double windchill(double v,double t){
double answer=13.12+(0.6215*t)-(11.37*pow(v,0.16))+(0.3965*t*pow(v,0.016));
return answer;

}

