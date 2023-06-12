#include <iostream>
#include <string.h>
using std::cout;
int main(){
    char message[] = "Vacation is near";
    char *strng = message;
    for(int i = 0 ; i < strlen(message) ; i++){
        cout << *(strng + i);
    } 
}