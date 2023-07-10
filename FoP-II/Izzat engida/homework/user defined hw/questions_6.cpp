#include<iostream>
using namespace std;
struct coordinate{
double x,y;
};
void print(coordinate);
coordinate input();
int main(){
    coordinate i;
    i=input();
    print(i);
    
return 0;
}
coordinate input(){
    coordinate axis;
    cout<<"enter the x coordinate: ";
    cin>>axis.x;
    cout<<"enter the y coordinate: ";
    cin>>axis.y;
    return axis;
}
void print(coordinate a){
    cout<<"the x coordinate is: "<<a.x<<endl<<endl;
    cout<<"the y coordinate is: "<<a.y<<endl<<endl;
}