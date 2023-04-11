#include <iostream>
int main(){
    float voltageList[100] = {0};
    int yearList[100] = {0,0};
    char charSet[30];
    float velocityList[32];
    int secondVoltageList[10] = {89,75,82,93,78,95,81,88,77,82};
    double slopeList[5] = {11.62,13.98,18.45,12.68,14.76};
    char charCodeList[15] = {'f','i','m','q','t','w','z'};
    for(int i = 0 ; i < 10 ; i++){
        if(i==0){std::cout << "Voltage List: ";}
        std::cout << secondVoltageList[i] << " ";
        if(i == 9){std::cout << std::endl;}
    }
    for(int i = 0 ; i < 5 ; i++){
        if(i==0){std::cout << "Slope List: ";}
        std::cout << slopeList[i] << " ";
        if(i==4){std::cout << std::endl;}
    }
    for(int i = 0 ; i < 15 ; i++){
        if(i==0){std::cout << "Character List: ";}
        std::cout << charCodeList[i] << " ";
    }
    return 0;
}
