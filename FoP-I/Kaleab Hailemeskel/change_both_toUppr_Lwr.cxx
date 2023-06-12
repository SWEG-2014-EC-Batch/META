#include <iostream>
#include<ctype.h>

using namespace std;

int main()
{
   char a,b;
   cout<<" enter the letter: ";
   cin>>a;
   b=(a>='a'&&a<='z')? tolower(a) : toupper(a);

   cout<<b;
   return 0;
}
