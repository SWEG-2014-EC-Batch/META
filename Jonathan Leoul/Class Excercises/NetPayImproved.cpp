#include <iostream>
using namespace std;

int main () {

//Menu and basic information
int Gross_Salary,Worked_Hours,BPH,Final,Pension=0.07,Overtime,x;
for (x=1;x!=0;) {
cout<<"Welcome.\n Please insert your gross salary (Currency in Dollars): ";
cin>>Gross_Salary;
cout<<"\nNow insert your total hours worked (Unit in hours): ";
cin>>Worked_Hours;

//Phase for checking hours worked 
if (Worked_Hours>=40) { 
cout<<"\nEnter your over-time bonus rate per hour :";
cin>>BPH;
Overtime = (Worked_Hours>=0);
cout<<"\nYour bonus payment is: "<<BPH*(Worked_Hours-40);
}
else {
    Overtime = 0;
} 


Final = Gross_Salary + Overtime;
cout<<"\nYou income salary is: "<< Final;

//Net salary calculator phase
switch (Final) {

    case 0 ... 200: cout<<"\nYou're net salary is "<<Final-(Final*Pension) + Overtime;
    break;
    case 201 ...600: cout<<"\nYou're net salary is "<<Final-(Final*Pension)-(Final*0.01) + Overtime;
    break;
    case 601 ... 1200: cout<<"\nYou're net salary is "<<Final-(Final*Pension)-(Final*0.15) + Overtime;
    break;
    case 1201 ... 2000: cout<<"\nYou're net salary is "<<Final-(Final*Pension)-(Final*0.20) + Overtime;
    break;
    case 2001 ... 3500: cout<<"\nYou're net salary is "<<Final-(Final*Pension)-(Final*0.25) + Overtime;
    break;
    case 3501 ... 100000000: cout<<"\nYou're salary is "<<Final-(Final*Pension)-(Final*0.30) + Overtime;
    break;
    default: cout<<"\nYou eneterd an invalid number";
}
cout<<"\n************************************\n"<<"\nInput 1 if you would like to continue and 0 if you would like to end the program :";
            cin>>x;
            if(x==0){
                cout<<"\nThe program has closed";
                break;
            }
            }
    return 0;
}