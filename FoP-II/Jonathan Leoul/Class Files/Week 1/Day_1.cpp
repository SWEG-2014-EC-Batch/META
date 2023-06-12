/*Purpose of this excercise is to practice how 
modular programming fundamentally works*/

#include <iostream>
using namespace std;

 void nameFunction();

int main () {
nameFunction();
return 0;
}

void nameFunction(){
    {

    cout<<"Hello, what is your name? "<<endl;
    char Name[25]={};
    cin.getline(Name,24);
    cout<<endl<<"Hello ";
    for (int x=0;x<=24;x++){
        cout<<Name[x];
    } cout<<endl<<"Welcome to M.P";
}
}
