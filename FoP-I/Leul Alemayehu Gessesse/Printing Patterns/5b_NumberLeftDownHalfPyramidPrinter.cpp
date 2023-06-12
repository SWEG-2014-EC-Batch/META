//This program prints the number 1 on the first row, 1 and 2 on the second, etc., all the way to 1–5 on the fifth row
#include <iostream>
int main(){
    int printedGridArray[5][5];
    for(int i = 0 ; i <= 4 ; i++){
        for(int j = 0 ; j <= 4 ; j ++){
            if(j <= i){
                printedGridArray[i][j] = j + 1;
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
