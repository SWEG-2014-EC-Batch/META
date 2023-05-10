// BMI CALCULATOR
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float weight, height, BMI;
    char gender;
    int i;
        cout<<"how many people for BMI: ";cin>>i;

    for(int m=1;m<=i;m++){

    cout<<"what is your gender (M/F): "<<endl;
    cin>>gender;
    cout<< "enter your weight: ";
    cin>> weight;
    cout<< "enter your height: ";
    cin>> height; BMI=weight/pow(height,2);

    if(gender=='m' || gender=='M')
    {
        if(BMI<20)
            {cout<<"you are underweight male\n";}
        else if(BMI>=20 && BMI<=25)
            { cout<<"you have normal BMI (m)\n";}
        else
            {cout<<"you are overweight male\n";}
    }


   else if(gender=='f' || gender=='F')
    {
        if(BMI<18)
            {cout<<"you are underweight female\n";}
        else if(BMI>=18 && BMI<=23)
                {cout<<"you have normal BMI(f)\n";}
        else
            {cout<<"you are overweight female\n";}
    }
    else {
        cout<<"invalid gender\n";
    }}

 return 0;
}
