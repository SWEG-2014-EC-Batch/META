#include <iostream>
#include <vector>
using namespace std;

int main(){

bool tag = true;

vector <int> nums {11, 12, 13, 14 , 13, 12}; //vector declaraization and initialization

auto it = nums.begin();    // assigning iterrator to begining of the vector
auto rit = nums.rbegin();  // assigning iterrator to reverse begining of the vector

for (; it != nums.end() ; it ++, rit ++ ){  
    if( *it != *rit ){                      // if the value of it and tit dosen't match tag wll become false
        cout << "Not Palindrome" << endl; 
        tag = false;
        break;
    }
}

if (tag == true )
    cout<<"It is Palindrome" << endl;



    return 0;
}