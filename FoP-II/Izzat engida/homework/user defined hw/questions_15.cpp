#include<iostream>
using namespace std;
class area{
 private:
 double length,breadth;   
public:
void input();
void getarea(double length,double breadth){
    cout<<length*breadth<<endl;
}

};
void area:: input(){
    cout<<"enter the length of the recangle: ";
    cin>>length;
    cout<<"enter the width of the recatangle:  ";
    cin>>breadth;
    cout<<"area is: ";
    getarea(length,breadth);
}
int main(){
    area h;
h.input();
}