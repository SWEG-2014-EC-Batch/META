//This program prints the letter A on the first row, A and B on the second, etc., all the way to A–E on the fifth row
#include <iostream>
int main(){
    char printedGridArray[5][5];
    for(int i = 0 ; i <= 4 ; i++){
        for(int j = 0 ; j <= 4 ; j ++){
            if(j <= i){
                printedGridArray[i][j] = j + 65;
                std::cout << printedGridArray[i][j] << " ";
                if((j+1)%5==0){
                    std::cout << std::endl;
                }
            }
            else{
                std::cout << "  ";
                if((j+1)%5==0){
                std::cout << std::endl;
                }
            }
        }
    }
}