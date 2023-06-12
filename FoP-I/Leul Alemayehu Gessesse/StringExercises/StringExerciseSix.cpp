#include <iostream>
using namespace std;
int main(){
    string inputString;
    int choice = 0;
    cout << "Enter message to analyze: \n";
    getline(cin,inputString);
    cout << "Do you want to find the first occurrence of a character in the message (1) or the first occurrence of a substring (2)? \n";
    cin >> choice;
    if(choice == 1){
        choice = 0;
        char checkedChar;
        bool isCharFound = false;
        cout << "Enter character whose first occurrence to find: \n";
        cin >> checkedChar;
        cout << "Would you like to find the first occurrence from the left (1) or from the right (2) of the message? \n";
        cin >> choice;
        if(choice == 1){
            for(int i = 0 ; i < inputString.length() ; i++){
                if(inputString.at(i) == checkedChar){
                    cout << "Searching from the left, the character " << checkedChar << " is first found at position " << i + 1;
                    isCharFound = true;
                    break;
            }
            }
        }
        else if(choice == 2){
            for(int i = inputString.length() - 1 ; i >= 0 ; i--){
                if(inputString.at(i) == checkedChar){
                    cout << "Searching from the right, the character " << checkedChar << " is first found at position " << inputString.length() - i;
                    isCharFound = true;
                    break;
                }
            }
        }
        if(isCharFound == false){
            cout << "The desired character, \"" << checkedChar << "\", was not found anywhere in the string.";
        }
    }
    else if(choice == 2){
        string messageSubstring;
        int totalSubstringFinds = 0;
        int stringFinderIndex = 0;
        cout << "Input substring to find in the message: " << endl;
        cin.ignore();
        getline(cin , messageSubstring);
        size_t located = inputString.find(messageSubstring);
        if(located != string::npos){
            cout << "Substring first found at position " << located + 1 <<endl;
            totalSubstringFinds++;
            do{
                size_t found = inputString.find(messageSubstring, stringFinderIndex+1);
                if(found != string::npos){
                    totalSubstringFinds++;
                }
                stringFinderIndex = found;
            }
            while(stringFinderIndex != inputString.length() - messageSubstring.length());
            cout << "In total, it is found in " << totalSubstringFinds << " positions.";
        }
    }
    else{
        cerr << "Error: Invalid choice";
    }
}