//The program prints an upside-down right triangle of asterisks whose base and height are both six units
#include <iostream>
int main(){
    char asteriskArray[6][6];
    for(int i = 0 ; i <= 5 ; i++){
        for(int j = 0 ; j <= 5 ; j++){
            if((6-i) > j){
                asteriskArray[i][j] = '*';
                std::cout << asteriskArray[i][j];
                if((j+1)%6 == 0){
                    std::cout <<std::endl;
                }
            }
            else{
                asteriskArray[i][j] = ' ';
                std::cout << asteriskArray[i][j];
                if((j+1)%6 == 0){
                    std::cout <<std::endl;
                }
            }
        }
    }
}
