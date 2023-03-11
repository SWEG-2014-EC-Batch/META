#include <iostream>
#include <ctype.h>
int main(){
    int calculationNumber;
    std::cout << "For how many people do you want BMI calculated successively?" <<std::endl;
    std::cin >> calculationNumber;
    for(int i = 1; i<=calculationNumber; i++){
    char sex;
    float weight;
    float height;
    float BMI;
    std::cout << "Insert sex for person " << i << " (write either m or f, a single letter): ";
    std::cin >> sex;
    std::cout << "Insert weight in kilograms: ";
    std::cin >> weight;
    std::cout << "Insert height in meters: ";
    std::cin >> height;
    BMI=weight/(height*height);
    if(tolower(sex)=='m'){
        std::cout << "Sex is male." << std::endl;
        if(BMI<20){
            std::cout << "The person's BMI is " << BMI << ", which indicates underweight." <<std::endl;
        }
        else if(20<=BMI && 25>=BMI){
            std::cout << "The person's BMI is " << BMI << ", which indicates a weight within the ideal range." <<std::endl;
        }
        else if(BMI>25){
            std::cout << "The person's BMI is " << BMI << ", which indicates overweight." <<std::endl;
        }
    }
    else if(tolower(sex)=='f'){
        std::cout << "Sex is female." << std::endl;
        if(BMI<18){
            std::cout << "The person's BMI is " << BMI << ", which indicates underweight." <<std::endl;
        }
        else if(18<=BMI && 23>=BMI){
            std::cout << "The person's BMI is " << BMI << ", which indicates a weight within the ideal range." <<std::endl;
        }
        else if(BMI>23){
            std::cout << "The person's BMI is " << BMI << ", which indicates overweight." <<std::endl;
        }
    }
    }
}
