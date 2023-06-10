#include <iostream>
#include <cmath>
using namespace std;

double hyp (double side1, double side2);

int main()
{   
    double lngth,width;
    cout<<"Enter width of the right angle triangle: ";
    cin>>width;
    cout<<"Enter length of the right angle triangle: ";
    cin>>lngth;
    
    cout<<"\n\tThe hypotenuse is "<<hyp(width,lngth);
    


}
double hyp (double side1, double side2){ return sqrt(pow(side1,2) + pow(side2,2)); }