
#include <iostream>
#include<cmath>
#include"string"
using namespace std;
int main() {
float total,test,project,quiz,final,assignment,number;
int test_count;
cout<<"enter number of people you want to calculate: ";
cin>>number;
for(int i=1;i<=number;i++){{
bg:
for(test_count=1;test_count<=3;test_count++)
cout<<"enter  your test score(15%): " ;
cin>>test;
 if(test<=15 && 0<test){cout<<",";
 }


   }
pr:
cout<<"enter your project score(20%): ";
cin>>project;
if(project<=20 && project>0){cout<<",";}
else{cout<<"enter a valid value"; goto pr;}
lr:
cout<<"enter your assignment score out of 10%: ";
cin>>assignment;
if(assignment<=10 && 0<assignment){cout<<",";}
    else{cout<<"enter a valid value"; goto lr; }
    en:
cout<<"enter your quiz out of 5%: ";
cin>>quiz;
if(quiz<=5 && quiz>0) {cout<<",";}
else{
    cout<<"enter a valid value"; goto en;}
    kl:
cout<<"enter your final score out of 50%: ";
cin>>final;
 if(final<=50 && 0<final){cout<<",";}
   else{ cout<<"enter a valid value"; goto kl;}
total=final+test+quiz+assignment+project;
 if(total>=90){
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
    cout<<"F"<<endl;
}
}
return 0;
}
