//lowercase ASCII a–z are 97-122, uppercase A–Z are 65–90
#include <iostream>
int main(){
    char letterArray[2][26];
    for(int i = 0 ; i <= 25 ; i++){
        letterArray[0][i] = 65+i;
    }
    for(int i = 0 ; i <= 25 ; i++){
       letterArray[1][i] = 97+i;
    }
    for(int i = 0 ; i <= 25 ; i++){
        std::cout << letterArray[0][i] << letterArray [1][i] << " ";
        if((i+1)%5==0){std::cout << std::endl;}
    }
    return 0;
}