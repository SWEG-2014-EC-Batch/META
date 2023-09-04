#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout<<"\nChanging values at specific memory locations and deletion\n\n";
  vector<int> num {1, 2, 3, 4, 5};

  cout << "Initial Vector: ";

  for (int i=0; i<num.size(); i++) {
    cout << num.at(i) << "  ";
  }

  // change elements at indexes 1 and 4
  num.at(1) = 9;
  num.at(4) = 7;
  // pop_back() funciton removes the last element of a vector
  num.pop_back();
  cout << "\nUpdated Vector: ";

  for (int i=0;i<num.size();i++) {
    cout <<num.at(i) << "  ";
  }

//Clearing all elements 
num.clear();
cout << "\nSize after clear(): " << num.size();

cout<<"\nValues after clearing vector: ";
for (int i=0;i<num.size();i++) {
    cout <<num.at(i) << "  ";
  }



  return 0;
}