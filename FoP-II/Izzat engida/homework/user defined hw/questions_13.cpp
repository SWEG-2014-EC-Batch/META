#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    void print(){
        cout<<name<<"  "<<roll_no<<endl;
    }
};
int main(){
    student object;
    object.name="John";
    object.roll_no=2;
    
}