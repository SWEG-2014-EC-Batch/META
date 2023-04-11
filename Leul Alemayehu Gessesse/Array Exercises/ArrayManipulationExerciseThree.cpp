//lowercase ASCII a–z are 97-122, uppercase A–Z are 65–90
#include <iostream>
int main(){
    char letterArray[52];
    for(int i=0 ; i<=25 ; i++){
        letterArray[i] = 65+i;
    }
    for(int i = 0; i<=25 ; i++){
       letterArray[i+26] = 97+i;
    }
    for(int i = 0 ; i <= 25 ; i++){
        std::cout << letterArray[i] << letterArray[i+26] << " ";
        if((i+1)%5==0){
            std::cout << std::endl;
        }
    }
}