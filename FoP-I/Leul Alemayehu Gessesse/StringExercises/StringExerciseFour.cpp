#include <iostream>
#include <string.h>
using std::cin;
using std::cout;
int main(){
    char usernames[5][100] = {"username", "USERNAME2", "UserName3", "userName4", "user_name5"};
    char passwords[5][20]{"Password1234", "password9876", "PASSWORD", "password", "pswd123"};
    char potentialUsername[20];
    char potentialPassword[20];
    bool authenticationStatus = false;
    cout << "Enter username:\n";
    gets(potentialUsername);
    do{
    cout << "Enter password (Make sure it is between 6 and 15 characters long): \n";
    gets(potentialPassword);
    }
    while(strlen(potentialPassword) > 15 || strlen(potentialPassword) < 6);
    for(int i = 0 ; i < 5 ; i++){
        if(stricmp(potentialUsername,usernames[i]) == 0 && strcmp(potentialPassword,passwords[i]) == 0){
            cout << "Authentication success! \n" << i;
            authenticationStatus = true;
            break;
        }
    }
    if(authenticationStatus == false){
        cout << "Username or password incorrect.";
    }
}