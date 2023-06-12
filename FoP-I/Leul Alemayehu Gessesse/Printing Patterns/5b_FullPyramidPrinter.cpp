//The "pyramid" is a triangle of asterisks with a base length of 11 units (* * * * * *) and height of 6 units
#include <iostream>
int main(){
    char asteriskArray[6][11];
    for(int i = 0 ; i <= 5 ; i++){
        for(int j = 0 ; j <= 10 ; j++){
            if(j <= 5+ i && i + j >= 5 && (i+j)%2 == 1){
                asteriskArray[i][j] = '*';
                std::cout << asteriskArray[i][j];
                if((j+1)%11 == 0){
                    std::cout <<std::endl;
                }
            }
            else{
                asteriskArray[i][j] = ' ';
                std::cout << asteriskArray[i][j];
                if((j+1)%11 == 0){
                    std::cout <<std::endl;
                }
            }
        }
    }
}
