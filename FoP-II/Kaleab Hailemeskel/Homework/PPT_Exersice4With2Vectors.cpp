#include <iostream>

using namespace std;

template<typename NAM, typename MAN>       // declarization of two types at one vector NAMELY MAN & NAM

float floatingPointDivide(NAM num1, MAN num2){

    return num1/num2;
}

int main(){

cout<< floatingPointDivide(45.4,6);


    return 0;
}