#include <iostream>
#include <ctype.h>
#include "prime_check.h"

using namespace std;

int main()
{
  int num;

  char check;
ab:
  cout << "Hello\n Enter a number of your choice: ";
  cin >> num;
  if (is_prime(num))
  {
    cout << endl
         << num << " is a prime number \nThe average of prime numbers less than or equal to "<<num<<" is: ";
    average(num);
  }
  else if(num==1){
    cout<<num <<" is neither compoiste nor prime"<<endl;
  }
