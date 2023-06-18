#include <iostream>
#include <cmath>
using namespace std;

void Windchill(float Temprature, float WindSpeed);
int main (){
float temp, winsp;
Windchill(temp,winsp);

    return 0;
}
void Windchill(float Temprature, float WindSpeed){
    cout<<"Welcome to the Windspeed index calculator"<<endl;
    ab:
    cout<<"Enter your temprautre in degree celcius (must be greater than or equal to 10): ";  cin>>Temprature;
    if (Temprature<10) goto ab;
    cout<<endl<<"Enter your windspeed in meters per second: "; cin>>WindSpeed;
    cout<<endl<<"Windchill index = ";
    cout<<13.12+ (0.6215*Temprature) -(11.37*pow(WindSpeed,0.16)) + (0.3965*Temprature*pow(WindSpeed,0.16));
}