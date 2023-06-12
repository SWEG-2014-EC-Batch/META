#include <iostream>

using namespace std;

int main()
{
    float mega_byte, M, P;
   cout<<"Enter the file size in MB: ";
   cin>>mega_byte;
   M=mega_byte*1024*1024;
   P=(M/956)/3600;
   cout<<"Time required to process is: "<<P<<" hour";
   return 0;}
