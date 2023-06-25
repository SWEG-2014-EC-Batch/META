#include <iostream>
#include "stringlibrary.h"

using namespace std;

int main (){
    char Test[15]={"Trial is .."};
    char T2[10]="Me and Me";
    
    cout<<stringLength(Test)<<endl<<vowelChecker(Test)<<endl<<consonantChecker(Test)<<endl;
    stringReverse(Test);
    cout<<endl;
    stringCompare(Test,T2);
    cout<<endl;
    convertToLowercase(Test);
    cout<<endl;
    convertToUppercase(Test);
}