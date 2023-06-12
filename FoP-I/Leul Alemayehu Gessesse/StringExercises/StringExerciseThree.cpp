#include <iostream>
using std::string;
using std::cin;
using std::cout;
int main(){
    string namesAndIds[2][5] = {{"Jonathan Leoul" , "Izzat Engida" , "Kaleab Hailemeskel" , "Leul Alemayehu" , "Liya Tsegaye"},{"ETS 0833/14","ETS 0834/14","ETS 0847/14","ETS 0961/14","ETS 0987/14"}};
    string potentialID;
    bool idMatch = false;
    cout << "Enter ID (Follow the format ETS XXXX/XX, with a space): \n";
    getline (cin,potentialID);
    for(int i = 0 ; i < 5 ; i++){
        if(potentialID == namesAndIds[1][i]){
            std::cout << namesAndIds[1][i] << " " << namesAndIds[0][i];
            idMatch = true;
        }
    }
    if(idMatch == false){
        std::cerr << "ID not found. Check input format or try a different ID.";
    }
}