//the pattern, which can be thought of as a 19*19 grid, has each column filled with the same number all the way down
//the first and last columns are filled with 0s, the middle column consists of 9s, and the other columns are composed of numbers that are smaller the
//further the associated column is from the center. Thus, a row should look like this: 0 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 0.
//One complication, however, is that the further from the 10th row a row is, the fewer of its numbers get printed. The 10th row has all its numbers printed,
//the 9th and 11th are missing one number (9), the 8th and 12th are missing three (8 9 8), and so on to the first and last rows, of whose numbers only the
//extremal 0s are printed. At a glance, one can tell that this has to involve an absolute value function, or some other function which "peaks in the middle" 
#include <iostream>
#include <cmath>
#include <ctype.h>
int main(){
    signed int patternArray[19][19];
    char inputValue;
    std::cout << "Enter positive integer or letter to print pattern: ";
    std::cin >> inputValue;
    signed int inputValueNumber = int(inputValue - '0');
    if(inputValueNumber <= 0){
        return 0;
    }
    for(int i = 0 ; i <= 18 ; i++){
        for(int j = 0 ; j <= 18 ; j++){
            patternArray[i][j] = 9 - abs(j-9);
            if(patternArray[i][j] <= 9 - abs (i-9)){
                std::cout << patternArray[i][j] << " ";
            }
            else{
                std::cout << "  ";
            }
            if(j == 18){
                std::cout << '\n';
            }
        }
    }
}
