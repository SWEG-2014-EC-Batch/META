

#include <iostream>

using namespace std;

int main () {

 cout<<"Enter the Gallon Capacity of your vehicle"; //Capacity = Gallon Capacity
double Capacity;
cin>> Capacity;
cout<<"Enter the Miles Per Gallon of your vehicle"; // MPG = Miles per Gallon
double MPG;
cin>>MPG;
double NMBP; // NMBP = Number of miles per gallon
NMBP = Capacity*MPG;
cout<<NMBP; 


    return 0;
}
