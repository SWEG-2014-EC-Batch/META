//This program prints the numbers 10–40 in four rows of ten numbers each
#include <iostream>
int main(){
    int digitArray[40];
    for(int i = 0 ; i <= 39 ; i++){
        digitArray[i] = i + 10;
        std::cout << digitArray[i] << " ";
        if(i%10 == 9){
            std::cout << std::endl;
        }
    }
}
