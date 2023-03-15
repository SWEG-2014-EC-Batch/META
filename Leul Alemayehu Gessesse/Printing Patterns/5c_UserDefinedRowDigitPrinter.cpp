#include <iostream>
int main(){
    int rowLength = 1;
    std::cout << "How long do you want each row to be? ";
    entry:
    std::cin >> rowLength;
    if(rowLength < 1){
        std::cerr << "Error: Invalid row length entered. Please try again: ";
        goto entry;
    }
    int digitArray[40];
    for(int i = 0 ; i <= 39 ; i++){
        digitArray[i] = i + 10;
         std::cout << digitArray[i] << " ";
        if((i+1)%rowLength == 0){
            std::cout << std::endl;
        }
    }
}