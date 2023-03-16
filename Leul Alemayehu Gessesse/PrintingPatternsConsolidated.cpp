#include <iostream>
#include <cmath>
#include <ctype.h>
int main(){
    int choice;
    std::cout << "Welcome" << '\n' << "Please select the pattern you wish to print: " << '\n' << '\n';
    startpoint:
    std::cout << "To print the numbers 10 to 40 in four rows, enter 1" << '\n'
              << "To print the letters a to e repeatedly in five rows, enter 2" << '\n'
              << "To print the letters A to X in four rows, enter 3" << '\n'
              << "To print the letter A on the first row, A and B on the second, etc., all the way to A to E on the fifth row, enter 4" << '\n'
              << "To print a pyramid which is actually a triangle of asterisks with a base length of 11 units (* * * * * *) and height of 6 units, enter 5" << '\n'
              << "To print a right-angled triangle whose hypotenuse is to the right and whose base and height are both six units long, enter 6" << '\n'
              << "To print a hollow rectangle made of asterisks, enter 7" << '\n'
              << "To print a hollow pyramid with a base of 11 (* * * * * *) and height of 6, enter 8" << '\n'
              << "To print a hollow inverted right triangle whose base and height are both six units, enter 9" << '\n'
              << "To print a flipped pyramid of asterisks with a base of 11 (* * * * * *) and height of 6, enter 10" << '\n'
              << "To print an upside-down right triangle of asterisks whose base and height are both six units, enter 11" << '\n'
              << "To print the number 1 on the first row, 1 and 2 on the second, etc., all the way to 1 to 5 on the fifth row, enter 12" << '\n'
              << "To print the number 1 on the first row, 2 and 1 on the second, etc., all the way to 5 to 1 on the fifth row, enter 13" << '\n'
              << "To print the numbers 1 to 5 repeatedly, in five rows, enter 14" << '\n'
              << "To print a solid grid of asterisks, enter 15" << '\n'
              << "To print the numbers 10 to 49 in a number of rows defined by the user, enter 16" << '\n' << '\n'
              << "Enter choice: ";
    std::cin >> choice;
    std::cout << std::endl;
    if(choice == 1){
        int digitArray[40] = {0};
        for(int i = 0 ; i <= 39 ; i++){
        digitArray[i] = i + 10;
        std::cout << digitArray[i] << " ";
        if(i%10 == 9){
            std::cout << std::endl;
        }
        }
    }
    else if(choice == 2){
        char printedGridArray[5][5];
        for(int i = 0 ; i <= 4 ; i++){
            for(int j = 0 ; j <= 4 ; j ++){
                printedGridArray[i][j] = 97 + j;
                std::cout << printedGridArray[i][j] << " ";
                if((j+1)%5==0){
                std::cout << std::endl;
                }
            }
        }
    }
    else if(choice == 3){
        char capitalLetterGrid[24];
        for(int i = 0 ; i <= 23 ; i++){
            capitalLetterGrid[i] = 65 + i;
            std::cout << capitalLetterGrid[i] << " ";
            if((i+1)%6==0){
                std::cout << std::endl;
            }
        }
    }
    else if(choice == 4){
        char printedGridArray[5][5];
        for(int i = 0 ; i <= 4 ; i++){
            for(int j = 0 ; j <= 4 ; j ++){
                if(j <= i){
                    printedGridArray[i][j] = j + 65;
                    std::cout << printedGridArray[i][j] << " ";
                if((j+1)%5==0){
                    std::cout << std::endl;
                }
                }
                else{
                    std::cout << "  ";
                    if((j+1)%5==0){
                        std::cout << std::endl;
                    }
                }
            }
        }
    }
    else if(choice == 5){
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
    else if(choice == 6){
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
    else if(choice == 7){
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
    else if(choice == 8){
        char asteriskArray[6][11];
        for(int i = 0 ; i <= 5 ; i++){
            for(int j = 0 ; j <= 10 ; j++){
                if(j == 5 + i || i + j == 5 || (i == 5 && j%2 == 0)){
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
    else if(choice == 9){
        char asteriskArray[6][6];
        for(int i = 0 ; i <= 5 ; i++){
            for(int j = 0 ; j <= 5 ; j++){
                if(i == 0 || j == 0 || (i+j) == 5){
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
    else if(choice == 10){
        char asteriskArray[6][11];
        for(int i = 0 ; i <= 5 ; i++){
            for(int j = 0 ; j <= 10 ; j++){
                if(j >= i && i+j <= 10 && (i+j)%2 == 0){
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
    else if(choice == 11){
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
    else if(choice == 12){
        int printedGridArray[5][5];
        for(int i = 0 ; i <= 4 ; i++){
            for(int j = 0 ; j <= 4 ; j ++){
                if(j <= i){
                    printedGridArray[i][j] = j + 1;
                    std::cout << printedGridArray[i][j] << " ";
                    if((j+1)%5==0){
                        std::cout << std::endl;
                    }
                }
                else{
                    std::cout << "  ";
                    if((j+1)%5==0){
                        std::cout << std::endl;
                    }
                }
            }
        }
    }
    else if(choice == 13){
        int printedGridArray[5][5];
        for(int i = 0 ; i <= 4 ; i++){
            for(int j = 0 ; j <= 4 ; j ++){
                if(j >= 4 - i){
                    printedGridArray[i][j] = 5 - j;
                    std::cout << printedGridArray[i][j] << " ";
                    if((j+1)%5==0){
                        std::cout << std::endl;
                    }
                }
                else{
                    std::cout << "  ";
                    if((j+1)%5==0){
                        std::cout << std::endl;
                    }
                }
            }
        }
    }
    else if(choice == 14){
        int printedGridArray[5][5];
        for(int i = 0 ; i <= 4 ; i++){
            for(int j = 0 ; j <= 4 ; j ++){
                printedGridArray[i][j] = j + 1;
                std::cout << printedGridArray[i][j] << " ";
                if((j+1)%5==0){
                    std::cout << std::endl;
                }
            }
        }
    }
    else if(choice == 15){
        char asteriskArray[28];
        for(int i = 0 ; i <= 27 ; i++){
            asteriskArray[i] = '*';
            std::cout << asteriskArray[i] << " ";
            if((i+1)%7==0){
                std::cout << std::endl;
            }
        }
    }
    else if(choice == 16){
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
    else{
        std::cerr << "Error: Invalid choice. ";
    }
    char confirmation;
    std::cout << std::endl << "Try again (Y/N)? ";
    std::cin >> confirmation;
    if(tolower(confirmation) == 'y'){
        std::cout << std::endl;
        goto startpoint;
    }
    else{
        return 0;
    }
}