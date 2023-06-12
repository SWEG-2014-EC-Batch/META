//This program prints the numbers 1–5 repeatedly, in five rows
#include <iostream>
int main(){
    int printedGridArray[5][5];
    for(int i = 0 ; i <= 4 ; i++){
        for(int j = 0 ; j <= 4 ; j ++){
            printedGridArray[i][j] = j + 1;
            std::cout << printedGridArray[i][j] << " ";
            if((j+1)%5==0){
                std::cout << std::endl;
            }
        }
    }
}