#include <iostream>
#include <cmath>
#include <ctype.h>
int main(){
    char inputValue;
    std::cout << "Enter positive integer or a character to print pattern: ";
    std::cin >> inputValue;
    //the following converts inputValue to a signed integer and checks if it's valid
    if(int(inputValue - '0') <= 0){
        return 0;
    }
    for(int rowNumber = 0 ; rowNumber <= 18 ; rowNumber++){
        for(int columnNumber = 0 ; columnNumber <= 18 ; columnNumber++){
            //the following absolute value condition gets more numbers printed the closer to the middle (10th) row one gets
            if(abs(columnNumber-9) >= abs (rowNumber-9)){
                //9 - abs(columnNumber-9) is an expression that effectively assigns successive columns the values 0, 1, 2, ... 8, 9, 8, ... 2, 1, 0
                std::cout << 9 - abs(columnNumber-9) << " ";
            }
            else{
                //we print two spaces instead of a number followed by a space if our condition fails
                std::cout << "  ";
            }
            if(columnNumber == 18){
                //once the 19th column is printed, we print a newline character so we can begin a new row
                std::cout << '\n';
            }
        }
    }
    std::cout << "\nEnter any key to exit program.\n";
    std::cin >> inputValue; //prevents program from exiting instantly
}