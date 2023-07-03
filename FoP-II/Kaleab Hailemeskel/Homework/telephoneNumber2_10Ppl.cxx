
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

struct phone{
    int areacode;
    int exchangecode;
    int numbercode;

} ;



int main(){

    int num=1;
    phone  phonenum1,  phonenum2;

    /*phonenum1.areacode = 251;
    phonenum1.exchangecode = 5110;
    phonenum1.numbercode = 3369;*/ phonenum1 = {251, 95110, 3369};

    cout<<"Enter your Area code (3 digits): ";
    cin>>phonenum2.areacode;
    cout<<"Enter your Exchange code (5 digits): ";
    cin>>phonenum2.exchangecode;
    cout<<"Enter your Number code (4 digits): ";
    cin>>phonenum2.numbercode;

    cout<<"\n\tThe telephone number of user "<<num++<<" is (+"<<phonenum2.areacode<<") "<<phonenum2.exchangecode<<" "<<phonenum2.numbercode<<". \n";
    cout<<"\tThe telephone number of user "<<num++<<" is (+"<<phonenum1.areacode<<") "<<phonenum1.exchangecode<<" "<<phonenum1.numbercode<<". \n";



return 0;
}
