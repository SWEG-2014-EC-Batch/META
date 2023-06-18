
#include <iostream>

using namespace std;

void swapValues(int& num1, int& num2, int& num3);

int main()
{   
    int a,b,c;
    
    cout<<"Please enter 3 integer one after the other separated by space: ";
    cin>>a>>b>>c;
    cout<<"\n\n\tThe numbers in order of intery are: "<<a<<", "<<b<<", "<<c;
    swapValues(a,b,c);
    cout<<"\n\tAfter using swaping function: "<<a<<", "<<b<<", "<<c;
}

void swapValues(int& num1, int& num2, int& num3){
    int swaphelp;
    if(num3>num2) {swaphelp=num2;num2=num3;num3=swaphelp;}
    if(num2>num1&&num2>num3){
        swaphelp=num1;num1=num2;
        if(swaphelp>num3){num2=swaphelp;}
        else{num2=num3;num3=swaphelp;}
        
    }
    if(num3>num1&&num3>num2){
        swaphelp=num1;num1=num3;
        if(swaphelp>num2){num3=num2;num2=swaphelp;}
        else{num3=swaphelp;}
        
    }
}