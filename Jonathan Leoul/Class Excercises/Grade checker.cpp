
#include <iostream>
#include <string>

using namespace std;

int main () {
       int A,B;
       cout<<"Please, insert your total marks out of 100:";
       cin>>A;
       
     if (A<25){
    cout<<"(You've gotten a score of F. You'll have to work hard" ;

     } else if (A>=25 && A<45) {cout<<"You've gotten a score of E. This isn't enough, you need to work harder";}
else if (A>=45 && A<50) {cout<<"You've gotten a score of D. Work harder ";}
    else if (A>=50 && A<60) {cout<<"You've gotten a score of C. Don't settle for mediocrity";}
    else if (A>=60 && A<80) {cout<<"You've gotten a score of B. Try Again";}
    else if (A>=80 && A<90) {cout<<"You've gotten a score of A. Try Again, Harder";}
else if (A>=90 && A<=99) {cout<<"You've gotten a score of A+. Good isn't Good enough, you have to be Better";}
else if (A=100) {cout<<"You've gotten a score of 100. Now, go Again";}
    
    return 0;

}