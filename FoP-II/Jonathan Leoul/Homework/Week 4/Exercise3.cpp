#include <iostream>
using namespace std;

int main () {
struct phone {
  long area,exchange,number;
 }Trial[100];

int N;
cout<<"Insert the number of students to store informations: ";
cin>>N;
for(int i=0;i<N;i++){
    cout<<endl;
 cout<<"Input your area code: ";
 cin>>Trial[i].area;
 cout<<endl<<"Input your exchange code: ";
 cin>>Trial[i].exchange;
 cout<<endl<<"Input your number : ";
 cin>>Trial[i].number;
 cout<<endl<<"Your phone number is : ("<<Trial[i].area<<") "<<Trial[i].exchange<<"-"<<Trial[i].number;
}
}