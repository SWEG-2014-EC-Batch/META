#include <iostream>

using namespace std;
int main() {

  int size = 6;
  
  for (int i = 0; i < size; i++) {
    
    for (int j = 0; j < size; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;}