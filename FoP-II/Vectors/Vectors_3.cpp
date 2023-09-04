#include <iostream>
#include <vector>
using namespace std;

int main () {
    cout<<"\nVectors and iterators\n\n";
  vector <int> num={1,2,3,4,5};

cout << "\nOutput of crbegin and crend Function: ";
for (auto iter = num.cbegin(); iter != num.cend(); ++iter)
cout << *iter << " ";

//resizing a vector
num.resize(4);

//output after resizing
cout<<endl<<"Output after resizing: ";
for (auto iter = num.cbegin(); iter != num.cend(); ++iter)
cout << *iter << " ";

cout << "\nOutput from begin and end: ";
// Direct way of declaring an iterator
vector <int>:: iterator iter;
for (iter = num.begin(); iter != num.end(); ++iter)
cout << *iter << " ";


}