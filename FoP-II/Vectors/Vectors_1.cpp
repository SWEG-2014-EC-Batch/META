#include <iostream>
#include <vector>
using namespace std;

int main() {

    cout<<"\nVector declaration, initialization and value insertion\n\n";
  vector<int> num {1, 2, 3, 4, 5};


 // Accessing Vectors using .at() function
 cout<<"Element number 1: "<<num.at(0)<<endl;
 cout<<"Element number 2: "<<num.at(1)<<endl;
 cout<<"Element number 3: "<<num.at(2)<<endl;

  cout << endl<<endl<<"Initial Vector: ";

  //size() function is used to determine number of elemetns in the vector
  //.at() operator is used to access individual elemetns
  for (int i=0; i<num.size();i++) {
    cout << num.at(i) << "  ";
  }

  
  
  // add the integers 6 and 0 to the vector using push_back() function
  num.push_back(6);
  num.push_back(0);
  //we can also use loops to add more values
  for (int i=1;i<=3;i++){
    num.push_back(i);
  }
  cout << "\nUpdated Vector: ";

  for (int i=0; i<num.size();i++) {
    cout << num.at(i) << "  ";
  }

//Inserting values
//insert values at specified position of vector
num.insert(num.begin(), 9);
num.insert(num.begin()+2, 7);
num.insert(num.end()-1, 50);

cout<<endl<<"Vector values after insertion: ";
for (int i=0;i<num.size();i++){
    cout<<num.at(i)<< " ";
}


  return 0;
}