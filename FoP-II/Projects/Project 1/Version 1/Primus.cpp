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
  else
  {
    cout << endl << num << " is a composite number \n Its prime divisors are: ";
    composite(num);
  }
ob:
  cout << endl
       << endl
       << " Would you like to continue? Press Y/N: ";
  cin >> check;

  check = toupper(check);
  if (check == 'Y')
  {
    goto ab;
  }
  else if (check == 'N')
  {
    cout<<"\n\n!!! Thank you for using this program !!!";
    return 0;
  }
}
