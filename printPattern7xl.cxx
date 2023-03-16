//printPattern7xl.cpp
#include <iostream>
using namespace std;
int
main ()
{

  int _size = 1, __size = 5;
  for (int size = 1; size <= 7; size++)
    {
      cout << " #";

    } cout << endl;


  for (int size = 1; size <= 4; size++)
    {
      for (int size = 1; size <= _size; size++)
  {
    cout << " ";
  }

      for (int size = 1; size <= 1; size++)
  {
    cout << " #";
  }

      for (int size = 8; size >= __size; size--)
  {
    cout << "  ";
  } _size++;
      __size++;

      for (int size = 1; size <= 1; size++)
  {
    cout << " #";
  } cout << endl;
    }
  for (int size = 1; size <= 7; size++)
    {
      cout << " ";
    } cout << "#" << endl;

  for (int size = 1; size <= 7; size++)
    {
      cout << " #";

    } cout << endl;
  return 0;
}