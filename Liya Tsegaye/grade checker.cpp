#include <iostream>

using namespace std;

int main ()
  
{
int result, test,quiz, project, assignment, finalExam,i;
char choice;
do{
cout << "Enter your test result(/15): "<<endl;
    cin >> test;
    for (i=1; test <0 || test >15; i++){
    if (i==3){
     cout << "You have exhausted your trials"<<endl;
     break;}
     cout << "Re-enter your test results out of 15: "<<endl;
     cin >>test;
    }
    cout << "Enter your quiz result(/5): "<<endl;
    cin>> quiz;
     for (i=1; quiz <0 || quiz >5; i++){
    if (i==3){
     cout << "You have exhausted your trials"<<endl;
     break;}
     cout << "Re-enter your quiz results out of 5: "<<endl;
     cin >>quiz;
    }
    cout << "Enter your project result(/20): "<<endl;
    cin>> project;
     for (i=1; project <0 || project >20; i++){
    if (i==3){
     cout << "You have exhausted your trials"<<endl;
     break;}
     cout << "Re-enter your project results out of 20: "<<endl;
     cin >>project;
    }
    cout << "Enter your assignment result(/10): " <<endl;
    cin >> assignment;
     for (i=1; assignment <0 || assignment >10; i++){
    if (i==3){
     cout << "You have exhausted your trials"<<endl;
     break;}
     cout << "Re-enter your assignment results out of 10: "<<endl;
     cin >>assignment;
    }
    cout << "Enter your final exam result(/50): " <<endl;
    cin >> finalExam;
     for (i=1; finalExam <0 || finalExam >50; i++){
    if (i==3){
     cout << "You have exhausted your trials"<<endl;
     break;}
     cout << "Re-enter your final exam results out of 15: "<<endl;
     cin >>finalExam;
    }
    result = test + quiz + project + assignment + finalExam;
  

    if (result >= 90 && result <= 100){
    cout << "Your grade is A+";
   } else if (result < 90 && result >= 80){
    cout <<"Your grade is A";
   }else if (result < 80 && result >=75 ){
    cout << "Your grade is B+";
   }else if(result < 75 && result >=60){
    cout << "Your grade is B";
   } else if (result < 60  && result >=55 ){
    cout << "Your grade is C+";
   } else if (result < 55  && result >= 45 ){
    cout << "Your grade is C";
   }else if (result < 45 && result >= 30 ){
    cout << "Your grade is D";
   }else if (result < 30 && result >= 0){
    cout << "Your grade is F";
   }
   cout << "DO YOU WISH TO CONTINUE? \n";
   cout << "O for Yes and X for NO.";
   cin >> choice;
}  
while (choice == 'O');
    return 0;
}
