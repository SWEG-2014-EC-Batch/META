#include <iostream>
using namespace std;

void input (int &choice, float &FirstValue, float &SecondValue);
void calculating (int &choice, float &FirstValue, float &SecondValue);
void output (int &choice, float &FirstValue, float &SecondValue);

int main (){
int choice;
float FirstValue,SecondValue;
char menu;
do {
   input(choice,FirstValue,SecondValue);
 calculating(choice,  FirstValue, SecondValue);
 output(choice,FirstValue, SecondValue);
    cout<<endl<<"Enter \"Y\" or \"y\" if you want to continue using this program. \n Press any other key to exit: ";
    cin>>menu;
} while (menu=='Y' || menu == 'y');


    return 0;
}
void input (int &choice, float &FirstValue, float &SecondValue){
cout<<"Enter \"1\" if you would like to convert from feet and inches, to meters and centimeters \n Enter \"2\" to convert meters and centimeters to feet and inchest\n";
cin>>choice;
if (choice==1){
    cout<<endl<< "Enter your feet and inches values respectively : "<<endl;
    cin>>FirstValue>>SecondValue;
}
else if (choice==2){
    cout<<endl<<"Enter your meter and centimeter values respectively: "<<endl;
    cin>>FirstValue>>SecondValue;
    }
}
void calculating (int &choice, float &FirstValue, float &SecondValue){
 if (choice ==1){
    FirstValue=FirstValue*0.3048; // Formula derieved from mathematical relations
    SecondValue=SecondValue*2.54; // There are 2.54 centimeters in an inch
 }
 if (choice ==2){
    FirstValue=FirstValue*3.280; // Formula derieved from mathematical relations
    SecondValue=SecondValue*0.393701; // Formula derieved from mathematical relations
 }
};
void output (int &choice, float &FirstValue, float &SecondValue){
   if(choice==1) cout<<"The converted result to Meters is:"<<FirstValue<<endl<<"The convefted result to Centimeters is:"<<SecondValue;
   else cout<<"The converted result to Feet is:"<<FirstValue<<endl<<"The convefted result to Inches is:"<<SecondValue;
};
