#include <iostream>
int main(){
    char asteriskArray[28];
    for(int i = 0 ; i <= 27 ; i++){
        asteriskArray[i] = '*';
        std::cout << asteriskArray[i] << " ";
        if((i+1)%7==0){
            std::cout << std::endl;
        }
    }
}