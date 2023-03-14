#include <iostream>
int globalArray[5];
int main(){
    int localArray[5];
    int i = 0;
    do{
        if(i==0){std::cout << "Global Array's Number List: ";}
        std::cout << globalArray[i] << " ";
        if(i==4){std::cout << std::endl;}
        i++;
    }
    while(i<=4);
    while(i>0){
        if(i==5){std::cout << "Local Array's Number List: ";}
        std::cout << localArray[5-i] << " ";
        i--;
    }
}
