#include <iostream>
#include "LibT.h"
#include "Lib2.h"

#ifndef LIB2
#define LIB2
void printer(){
 cout<<"Dull Message printer Vhk";

}
#endif
using namespace std;


int main () {
    int firstNum; double secondNum;


      double product= getProduct(firstNum,secondNum);
      cout<<"Multiplicative result of these two numbers is :"<<product<<endl;
       printer();
      return 0;
}
