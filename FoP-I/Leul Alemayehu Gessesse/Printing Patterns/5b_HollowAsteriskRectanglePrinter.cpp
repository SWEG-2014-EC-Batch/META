//The program prints a hollow rectangle made of asterisks
#include <iostream>
int main(){
    char asteriskArray[56];
    for(int i = 0 ; i <= 55 ; i++){
        asteriskArray[i] = '*';
        if(i < 7 || i > 48 || i%8 == 0 || (i+1)%8 == 0){
            std::cout << asteriskArray[i] << " ";
        }
        else{
            std::cout << "  ";
        }
        if((i+1)%8 == 0){
            std::cout << std::endl;
        }
    }
}
