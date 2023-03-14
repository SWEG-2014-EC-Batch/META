#include <iostream>
int main(){
    int twoDArray[5][6];
    twoDArray[0][0] = 41212;
    twoDArray[0][1] = 1409878;
    for(int i = 0 ; i <= 5 ; i++){
        twoDArray[2][i] = 0;
    }
    twoDArray[3][4] = 32642;
    twoDArray[3][5] = 987;
    for(int i = 1 ; i <= 4 ; i++){
    twoDArray[4][i] = 35*i + i*i;
    }
    for(int i=0 ; i < 5 ; i++){
        for(int j=0 ; j < 6 ; j++){
            std::cout << twoDArray[i][j] << "       ";
            if(j == 5){
                std::cout << std::endl;
            }
        }
    }
} 
