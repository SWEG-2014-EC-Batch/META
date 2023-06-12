//The program prints a right-angled triangle whose hypotenuse is to the right and whose base and height are both six units long
#include <iostream>
int main(){
    char asteriskArray[6][6];
    for(int i = 0 ; i <= 5 ; i++){
        for(int j = 0 ; j <= 5 ; j++){
            if(i >= j){
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
