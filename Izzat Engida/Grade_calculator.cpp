//grade calculator
#include <iostream>
using namespace std;
int main() {
float total,test,project,quiz,final,assignment,number;
int test_count;
cout<<"enter number of people you want to calculate: ";
cin>>number;//input of number of students you want to calculate
for(int i=1;i<=number;i++){
cout<<"enter  your test score(15%): " ;
cin>>test;
 if(test<=15 && 0<test){cout<<",";
 }else{for(int k=1;k<=2;k++){
cout<<"you have gone out of bound enter again"<<endl;
cout<<"enter  your test score(15%): " ;
cin>>test;
if(test<=15 && 0<test){
goto pr;}else{return 1;} } }
pr:
cout<<"enter your project score(20%): ";
cin>>project;
if(project<=20 && project>0){cout<<",";}
else{for(int k=1;k<=2;k++){
cout<<"you have gone out of bound enter again"<<endl;
cout<<"enter  your project score(20%): " ;
cin>>project;
if(project<=20 && project>0){
goto lr;} else{return 2;}}}
lr:
cout<<"enter your assignment score out of 10%: ";
cin>>assignment;
if(assignment<=10 && 0<assignment){cout<<",";}
    else{for(int k=1;k<=2;k++){cout<<"you have gone out of bound enter again"<<endl; 
    cout<<"enter your assignment score out of 10%: ";
cin>>assignment;
if(assignment<=10 && 0<assignment){
    goto en;}else{return 3;}}}
    en:
cout<<"enter your quiz out of 5%: ";
cin>>quiz;
if(quiz<=5 && quiz>0) {cout<<",";}
else{for(int k=1;k<=2;k++){cout<<"you have gone out of bound enter again"<<endl;
cout<<"enter your quiz out of 5%: ";
cin>>quiz;
 if(quiz<=5 && quiz>0){
    goto kl;
 }else{return 1;}} }
    kl:
cout<<"enter your final score out of 50%: ";
cin>>final;
 if(final<=50 && 0<final){cout<<",";}
   else{for(int k=1;k<=2;k++){cout<<"you have gone out of bound enter again"<<endl;
   cout<<"enter your final score out of 50%: ";
cin>>final;
 if(final<=50 && 0<final){goto op;}else{return 1;}} }
 op:
total=final+test+quiz+assignment+project;//sum total of the results
 if(total>=90){
    //grade reports
 cout<<"A+"<<endl;   
}else if(total>=80){
    cout<<"A"<<endl;
}else if(total>=75){
    cout<<"B+"<<endl;
}else if (total>=60){
    cout<<"B"<<endl;
}else if(total>=55){
    cout<<"C+"<<endl;
}else if(total>=45){
    cout<<"C"<<endl;
}else if(total>=30){
    cout<<"D"<<endl;
}else {
    cout<<"F"<<endl;}}
return 0;}
