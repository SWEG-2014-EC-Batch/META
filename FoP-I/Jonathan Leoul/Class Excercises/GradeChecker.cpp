#include <iostream>
#include <string>
using namespace std;

int main () {
int Grade,Q=0,T=0,A=0,P=0,F=0,i,n;

    
string Name;

cout<<"Welcome to the grade checker program\n";
s:
cout<<"Insert the number people, for which you want to calculate their result :";
cin>>n;
cout<<"\nYou entered "<<n<<endl;
if (n<=0) {
    cout<<"\nYou entered an invalid number, try again\n";
    goto s;
}
for (i=1;i<=n;i++) {
    cout<<"\n\nYou are now calculating the score of student "<<i;
cout<<"\nEnter the name of the student (First Name only): ";
cin>>Name;
i=1;
qq:
 cout<<"\nEnter quiz result (5%): ";
cin>>Q;


if (Q<0 || Q>5){
    while (i<4){
  cout<<"You entered an invalid result, try again"<<" You are on your "<<i<<" try\n";
    i++;
    goto qq;
    
} }
if (Q<0 || Q>5){
    Q=0;
} i=1;
tt:

cout<<"Enter test result (15%): ";
cin>>T;


if (T<0 || T>15){while (i<4){
    cout<<"You entered an invalid result, try again"<<" You are on your "<<i<<" try\n";
    i++;
    goto tt;
}}if (T<0 || T>15){
    T=0;
}i=1;
aa:
cout<<"Enter Assignment result (10%): ";
cin>>A;



if (A<0 || A>10){while (i<4){
    cout<<"You entered an invalid result, try again"<<" You are on your "<<i<<" try\n";
    i++;
    goto aa;
}}if (A<0 || A>10){
    A=0; 
}i=1;
pp:
cout<<"Enter Project result (20%): ";
cin>>P;

if (P<0 || P>20){while (i<4){
     cout<<"You entered an invalid result, try again"<<" You are on your "<<i<<" try\n";
    i++;
    goto pp;
}}if (P<0 || P>20){
    P=0;
}
i=1;
ff:
cout<<"Enter Final exam result (50%): ";
cin>>F;


if (F<0 || F>50){while (i<4){
     cout<<"You entered an invalid result, try again"<<" You are on your "<<i<<" try\n";
    i++;
    goto ff;
}} if (F<0 || F>50) {
    F=0;

}
Grade = Q+T+A+P+F;


switch (Grade){
case 0 ... 29 :cout<<Name<<" scored "<<Grade<<" and got a grade of F";break;
case  30 ... 44 :cout<<Name<<"  scored "<<Grade<<" and got a grade of D";break;
case 45 ... 54  :cout<<Name<<"  scored "<<Grade<<" and got a grade of C";break;
case 55 ... 59 :cout<<Name<<"  scored "<<Grade<<" and got a grade of C+";break;
case 60 ... 74 :cout<<Name<<"  scored "<<Grade<<" and got a grade of B";break;
case 75 ... 79 :cout<<Name<<"  scored "<<Grade<<" and got a grade of B+";break;
case 80 ... 89 :cout<<Name<<"  scored "<<Grade<<" and got a grade of A";break;
case 90 ... 100: cout<<Name<<"  scored "<<Grade<<" and got a grade of A+";break;

}}
cout<<"You are done calulating the grades of "<<n<<" Thank you!";
return 0;

}