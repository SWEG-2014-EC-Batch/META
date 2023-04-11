#include <iostream>
#include <string.h>
int main(){
    char idNumbers [5][12] = {"ETS 0833/14","ETS 0834/14","ETS 0847/14","ETS 0961/14","ETS 0987/14"};
    char putativeID[12];
    bool idMatch = false;
    std::cout << "Input ID (Follow the format ETS XXXX/XX, using a space): \n";
    gets(putativeID);
    for(int i = 0 ; i < 5 ; i++){
        if(stricmp(idNumbers[i],putativeID) == 0){
            std::cout << putativeID;
            idMatch = true;
        }
    }
    if(idMatch == false){
        std::cerr << "ID not found. Check input format or try a different ID.";
    }
}