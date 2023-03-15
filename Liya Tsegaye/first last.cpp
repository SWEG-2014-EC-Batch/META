#include <iostream>
using namespace std;
 
int main() {
 
    int n;
    cout <<"Enter your number: ";
    cin>> n;
      string s = to_string(n);
      int first_digit = s.front() - '0';
      int last_digit = s.back() - '0';
      cout<<"First digit is "<<first_digit<<endl;
      cout<<"Last digit is "<<last_digit<<endl;
}