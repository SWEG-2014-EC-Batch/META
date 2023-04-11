#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "How many students? ";
    cin>> n;
    int *marks = new int[n];
    cout << "input Grade for Student \n";
    for (int i = 0; i <n; i++){
        cout << (i+1) <<" : "; cin >> marks[i];
    }
    delete []marks; //deallocation of memory pointed by marks. THE LINE SAID delete [n]marks EARLIER
    cout<<"1st Mark is: "<< *marks<<endl; //print garbage data
    marks = 0; //reset the point to NULL. At least that's what it SHOULD do had it been marks = 0 and not Marks = 0;
}