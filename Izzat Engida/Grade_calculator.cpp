//grade calculator
#include <iostream>
using namespace std;
int main() {
float total,test,project,quiz,final,assignment,number;
cout<<"enter number of people you want to calculate: ";
cin>>number;//input of number of students you want to calculate
for(int i=1;i<=number;i++){
cout<<"enter  your test score(15%): " ;
cin>>test;
int test_count=1;
while(test<0||test>15){
    test_count++;
    if(test_count==4){cout<<"sorry, can't try more"; return 1;}
cout<<"you have gone out of bound enter again"<<endl;
cout<<"enter  your test score(15%): " ;
cin>>test;}

cout<<"enter your project score(20%): ";
cin>>project;
int test_count2=1;
while (project<0 || project>20)
{test_count2++;
    if(test_count2==4){cout<<"sorry, can't try more"; return 1;}
cout<<"you have gone out of bound enter again"<<endl;
cout<<"enter  your project score(20%): " ;
cin>>project;}

cout<<"enter your assignment score out of 10%: ";
cin>>assignment;
int test_count3=1;
while (assignment<0 || assignment>10){
    test_count3++;
    if(test_count3==4){cout<<"sorry, can't try more"; return 1;}
cout<<"you have gone out of bound enter again"<<endl; 
    cout<<"enter your assignment score out of 10%: ";
cin>>assignment;}

cout<<"enter your quiz out of 5%: ";
cin>>quiz;
int test_count4=1;
while (quiz<0 || quiz>5)
{test_count4++;
    if(test_count4==4){cout<<"sorry, can't try more"; return 1;}
cout<<"you have gone out of bound enter again"<<endl;
cout<<"enter your quiz out of 5%: ";
cin>>quiz;}

cout<<"enter your final score out of 50%: ";
cin>>final;
int test_count5=1;
while (final<0 ||final>50)
{test_count5++;
    if(test_count5==4){cout<<"sorry, can't try more"; return 1;}
cout<<"you have gone out of bound enter again"<<endl;
   cout<<"enter your final score out of 50%: ";
cin>>final;}

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
    cout<<"F"<<endl;
}
return 0;
}
}