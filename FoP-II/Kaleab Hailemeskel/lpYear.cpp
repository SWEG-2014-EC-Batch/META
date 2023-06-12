#include <iostream>
using namespace std;

bool lpyear(int year);

int main(){
    int yr;
    cout<<"Which year do you wanat to test for leap year: ";
    cin>>yr;
    cout<<lpyear(yr);
}
bool lpyear(int year){
    if( year%4==0 ) return true;
    else return false;
}