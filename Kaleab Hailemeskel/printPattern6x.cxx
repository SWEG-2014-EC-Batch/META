//printPattern6x.cpp
#include <iostream>
using namespace std;
int main ()
{
   
  int _size=1;
  for(int size=1;size<=7;size++)
  {
      cout<<"#";
      
  } cout<<endl;
  _size++;
  for(int size=1;size<=4;size++)
  {
     do
      {
          cout<<"#";
      }while(false);
      for(_size=2;_size<=6;_size++)
      {
          cout<<" ";
      }
       do
      {
          cout<<"#";
      }while(false);
      cout<<endl;
  }  
   for(int size=1;size<=7;size++)
  {
      cout<<"#";
      
  }
  return 0;
}