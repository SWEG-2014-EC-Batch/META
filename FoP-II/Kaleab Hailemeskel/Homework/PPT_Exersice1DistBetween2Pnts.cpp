#include <iostream>
#include <cmath>

using namespace std;

template <typename T> //template declaration

T Distance (T x1, T y1, T x2, T y2){
    return (sqrt ( pow ((x2 - x1), 2) + pow ((y2 - y1), 2) ));
}

int main(){

cout << "Distance between two points: "<< Distance<float>(3, 4 , 5, 6); //template calling of datatype float


    return 0;
}