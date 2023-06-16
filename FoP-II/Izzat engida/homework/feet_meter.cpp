#include<iostream>
#include<ctype.h>
using namespace std;
void input(int& type,double& value1,double& value2);
void conversion(int type,double value1,double value2,double& result1,double& result2);
void output(int type,double result1,double result2);
int main(){
    int type;
    double result1,result2,value1,value2;
        char repeat = 'y';
    while (repeat == 'y') {
        input(type, value1, value2);
        conversion(type, value1, value2, result1, result2);
        output(type, result1, result2);
        cout << "Do you want to repeat this computation for new input values? Enter 'y' for yes or 'n' for no: ";
        cin >> repeat;
    }
}
void input(int& type,double& value1,double& value2){
    ab:
    cout << "Enter 1 to convert from feet and inches to meters and \ncentimeters or 2 to convert from meters and centimeters to feet and inches: ";
    cin>>type;
    if(type==1){
        cout<<"enter the length in feet: ";
        cin>>value1;
        cout<<"enter the length in inches: ";
        cin>>value2;
    }
    else if(type==2){
        cout<<"enter the length in meter: ";
        cin>>value1;
        cout<<"enter the length in centimeters: ";
        cin>>value2;
    }
    else{cout<<"wrong input"<<endl;
    goto ab;}
}
void conversion(int type,double value1,double value2,double& result1,double& result2){
    if(type==1){
        result1=value1*0.3048;
        result2=((value2/12)*0.3048)*100;

    }
    else if(type==2){
        result1=value1/0.3048;
        result2=((value2*12)/0.3048)/100;
    }
}
void output(int type,double result1,double result2){
if(type==1){
    cout<<"length in meter is: "<<result1<<" and length in cm: "<<result2<<endl;

}
else if(type==2){
    cout<<"length in feet is: "<<result1<<" and length in inches is: "<<result2<<endl;
}
}

