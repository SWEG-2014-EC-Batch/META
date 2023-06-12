#include <iostream>
#include <cmath>

using namespace std;

double answer (double num1, double num2);

int main()
{ double cube,_sqrt;
   
    cout<<"Enter to be cubed number: ";
    cin>>cube;
    cout<<"Enter to be square rooted number: ";
    cin>>_sqrt;
    cout<<"The answer is: "<<answer(cube,_sqrt);
   
       
   }
   
  double answer(double num1, double num2)
  { return pow(num1,3) + pow(num2,0.5); }