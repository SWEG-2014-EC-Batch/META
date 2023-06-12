#include <iostream>
int main(){
    long long int checkedNum;
    long long int leastFactor=1;
    long long int factorSum = 1;
    std::cout << "Insert number whose perfectness to check: ";
    std::cin >> checkedNum;
    if(checkedNum <= 2){
        std::cout << checkedNum << " is not perfect.";
    }
    else{
        for(long long int i=2; i<checkedNum; i++){
            if(leastFactor==1 && checkedNum%i==0){
                leastFactor=checkedNum;
                factorSum += i;
            }
            else if(checkedNum%i==0){
                factorSum += i;
            }
            else if(leastFactor==1 && i>checkedNum/2){
                std::cout << checkedNum << " is not perfect. It is in fact prime.";
                return 0;
            }
        }
    }
    if(factorSum == checkedNum){
        std::cout << checkedNum << " is perfect.";
    }
    else{
        std::cout << checkedNum << " is not perfect.";
    }
}