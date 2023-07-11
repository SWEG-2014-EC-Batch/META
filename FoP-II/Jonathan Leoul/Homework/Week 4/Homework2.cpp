#include <iostream>
using namespace std;

struct Complex {
    int real,complex;
};

Complex Operations(Complex Num1, Complex Num2); 
int main () {
Complex Num1,Num2;
cout<<"Insert your first complex number (Real part and imaginery part respectively): ";
cin>>Num1.real>>Num1.complex;
cout<<endl<<"Insert your second complex number (Real and imaginary part respectively): ";
cin>>Num2.real>>Num2.complex; cout<<endl;

Operations(Num1,Num2);



  
}

Complex Operations(Complex Num1, Complex Num2){
    cout<<"Enter \"1\" for addition operation\nEnter \"2\" for subtraction operation\nEnter \"3\" for multiplication operation\nEnter \"4\" for division operation\n";
    int input;
    cin>>input;
    
    cout<<"Complex Number 1: "<<Num1.real<<" + "<<Num1.complex<<endl;
     cout<<"Complex Number 1: "<<Num2.real<<" + "<<Num2.complex<<endl;
     
    if(input==1){
        cout<<"Addition operation: ";
        cout<<(Num1.real+Num2.real)<<" + "<<(Num1.complex+Num2.complex)<<"i";
    }
    else if(input==2){
        cout<<"Subtraction operation: ";
        cout<<(Num1.real-Num2.real)<<" + "<<(Num1.complex-Num2.complex)<<"i";
    }
    else if(input ==3){
        cout<<"Multiplication operation: ";
        cout<<((Num1.real*Num2.real)+(Num1.complex*Num2.complex))<<" + "<<((Num1.real*Num2.complex)+(Num1.complex*Num2.real))<<"i";
    }
    else if (input==4){
        cout<<"Division operation: ";
        cout<<(((Num1.real*Num2.real)+(Num1.complex*(-Num2.complex))))/((Num2.real*Num2.real)+(Num2.complex*Num2.complex))<<" + "<<(((Num1.real*(-Num2.complex)))+(Num1.complex*Num2.real))/((Num2.real*Num2.real)+(Num2.complex*Num2.complex))<<"i";
    }

}