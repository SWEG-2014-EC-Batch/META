#include <iostream>
using namespace std;

void Swapper( int &Largest, int &Middle, int &Smallest);
int main () {
int Num1,Num2,Num3;
cout<<"Enter 3 random numbers respectively: ";
cin>>Num1>>Num2>>Num3;
Swapper (Num1, Num2,Num3);
cout<<endl<<"Largest Number "<<Num1<<endl;
cout<<"Middle Number "<<Num2<<endl;
cout<<"Smallest Number "<<Num3<<endl;

    return 0;
}
void Swapper( int &Largest, int &Middle, int &Smallest){
    if (Smallest>Middle){
        swap(Middle,Smallest);
    } 
    if (Largest<Middle){
        swap(Largest,Middle);
    }
    if(Largest<Smallest){
        swap(Largest,Smallest);
    }
    if(Middle<Smallest){
        swap(Middle,Smallest);
    }
}
