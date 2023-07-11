#include <iostream>
using namespace std;

int main () {
struct phone {
  long area,exchange,number;
 };

 struct Names {
    char name[20];
    phone numbers;
 }Collection[10];

for (int i=0;i<10;i++){
    cout<<"Person "<<(i+1)<<endl;
    cout<<"Insert name :";
    cin.ignore();
    cin.get(Collection[i].name,19);
    cout<<endl<<"Insert area code: ";
    cin>>Collection[i].numbers.area;
    cout<<endl<<"Insert exchange code: ";
    cin>>Collection[i].numbers.exchange;
    cout<<endl<<"Insert phone number: ";
    cin>>Collection[i].numbers.number;
    cout<<endl;
}

for(int i=0;i<10;i++){
    cout<<"Person "<<(i+1)<<endl;
    cout<<"Name : ";
    cout<<Collection[i].name;
    cout<<endl<<"Phone number: "<<"("<<Collection[i].numbers.area<<")"<<Collection[i].numbers.exchange<<"-"<<Collection[i].numbers.number;
    cout<<endl;
}
}
