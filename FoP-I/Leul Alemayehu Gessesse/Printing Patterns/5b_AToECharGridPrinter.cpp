//This program prints the letters a–e repeatedly, in five rows
#include <iostream>
int main(){
    char printedGridArray[5][5];
    for(int i = 0 ; i <= 4 ; i++){
        for(int j = 0 ; j <= 4 ; j ++){
            printedGridArray[i][j] = 97 + j;
            std::cout << printedGridArray[i][j] << " ";
            if((j+1)%5==0){
                std::cout << std::endl;
            }
        }
    }
}
