#include <iostream>
using std::cin;
using std::cout;
int main(){
    int TwoDArray[2][3] = {45, 67, 75, 64, 83, 59};
    int *pointerTwoD = &TwoDArray[0][0];
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cout << *(pointerTwoD + i*3 + j) << " ";
        }
    }
    }