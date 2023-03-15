//This program prints the English letters A to X in four rows of six letters each
#include <iostream>
int main(){
    char capitalLetterGrid[24];
    for(int i = 0 ; i <= 23 ; i++){
        capitalLetterGrid[i] = 65 + i;
        std::cout << capitalLetterGrid[i] << " ";
        if((i+1)%6==0){
            std::cout << std::endl;
        }
    }
}