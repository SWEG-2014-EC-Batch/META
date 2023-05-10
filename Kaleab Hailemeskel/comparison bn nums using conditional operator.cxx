#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
   int a, b , c;
   cin>>a >>b >>c;
   
  a= (a>b && a>c)? a : (b>c && b>a)? b : c ;           
	cout<<a;
return 0;	
}