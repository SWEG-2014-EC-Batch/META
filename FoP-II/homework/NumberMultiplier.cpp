// Number Multiplier Function
#include <iostream>
using namespace std;

// Function Declaration
double getProduct (int firstNum, double secondNum);
int main () {
    int firstNum; double secondNum;
      double product= getProduct(firstNum,secondNum);
      cout<<"Multiplicative result of these two numbers is :"<<product;
    
      return 0;
}
//Function Definition
double getProduct (int firstNum, double secondNum){
    cout<<" Insert 2 integers respectively (One normal and one double integer) "<<endl;
    cin>>firstNum>>secondNum;

    return firstNum*secondNum;

}
