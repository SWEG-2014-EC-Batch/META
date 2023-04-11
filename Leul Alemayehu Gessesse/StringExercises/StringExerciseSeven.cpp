#include <iostream>
using namespace std;
int main(){
    string inputString;
    cout << "Input message to tokenize: \n";
    getline(cin,inputString);
    cout << "Tokenizing the input message yields the following result:\n";
    for(int i = 0 ; i < inputString.length() ; i++){
        if(inputString[i] == ' '){
            cout << endl;
            continue;
        }
        cout << inputString[i];
    }
}