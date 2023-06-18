#include<iostream>


using namespace std; 
void scale(double scalePar, double& num1, double& num2);

int main()
{
  double scalePar, num1, num2;
    cout<<"\n    This function will gives how much portion does each two numbers cover in their sum withregard to the given parameter\n";
    cout<<"Enter any two numbers: ";
    cin>>num1>>num2;
    cout<<"Enter your parameter: ";
    cin>>scalePar;
    if(scalePar==0){return 0;}
    cout<<"Before scaling = "<<num1<<", "<<num2<<endl;
    scale(scalePar, num1, num2);
    cout<<"After Scaling = "<<num1<<", "<<num2;
}

void scale(double scalePar, double& num1, double& num2)
{  
    double hold;
    hold=num1;
    
    num1 = (num1/(num2 + num1)) * scalePar;
    num2 = (num2/(hold + num2)) * scalePar;
}