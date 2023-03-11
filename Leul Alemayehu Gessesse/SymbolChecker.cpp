#include <iostream>
#include <ctype.h>
int main(){
    char symbol;
    std::cout << "Input variable to check: ";
    std::cin >> symbol;
    if(isupper(symbol)){
        std::cout << symbol << " is an uppercase alphabetic character. Also, ";
        if(symbol == 'A' || symbol == 'E' || symbol == 'I' || symbol == 'O' || symbol == 'U'){
            std::cout << "it is a vowel.";
        }
        else{
            std::cout << "it is a consonant.";
        }
    }
    else if(islower(symbol)){
        std::cout << symbol << " is a lowercase alphabetic character. Also, ";
        if(symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol ==  'u'){
            std::cout << "it is a vowel.";
        }
        else{
            std::cout << "it is a consonant.";
        }
    }
    else if(isdigit(symbol) && symbol%2==0){
            std::cout << symbol << " is an even digit.";
        }
    else if(isdigit(symbol)){
            std::cout << symbol << " is an odd digit.";
        }
    else{
        std::cout << symbol << " is a special character.";
    }
    return 0;
}
