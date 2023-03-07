#include <iostream>
#include <iomanip>
int main(){
    long double smallerVar = 1;
    long double biggerVar = 1;
    long double sumVar;
    long double dummyVar;
    long double inputVar;
    std::cout << "Until whatth Fibonacci number do you want the sequence written out? ";
    std::cin >> inputVar;
    if(inputVar==1){
        std::cout << smallerVar;
        return 0;
    }
    else if (inputVar==2){
        std::cout << smallerVar << '\n' << biggerVar << std::endl;
        return 0;
    }
    else{
        std::cout << smallerVar << '\n' << biggerVar << '\n';
        for(long double i = 1; i<=inputVar-2; i++){
            dummyVar=biggerVar;
            sumVar=smallerVar+biggerVar;
            std::cout << std::setprecision (30) << sumVar << std::endl;
            biggerVar = sumVar;
            smallerVar = dummyVar;
    }
    }
}