#include <iostream>
using namespace std;

int main () {

int n;

cout<<"Insert a number n to test whether it's odd positive or even negative:";
cin>>n;
(n>=0 && n%2!=0)? cout<<"It's odd positive": (n<=0 && n%2==0)? cout<<"It's even negative" : cout<<"It's neither of the two";

    return 0;
}