#include <iostream>
#include <fstream> 
using namespace std;

struct students{
   string name;
   int exam1,exam2,homework,finalexam,grade;
   char letGrade;

};

void input(students input[]);

int main () {
students collection[20];
input(collection);
}

void input(students input[]){
  ofstream fout("Grade.txt",ios::out);
  fout<<"Name\t\t\tExam 1\tExam 2\tHomework\tFinal Exam\tTotal\tGrade\n"; 

  for(int i=0;i<=9;i++){
  cout<<"Enter name of student: ";
  cin>>input[i].name;
  cout<<"Enter Exam 1,2, Homework and Final exam results, respectively: ";
  cin>>input[i].exam1>>input[i].exam2>>input[i].homework>>input[i].finalexam;
  input[i].grade=(0.2*input[i].exam1)+(0.2*input[i].exam2)+(0.35*input[i].homework)+(0.25*input[i].finalexam);
  switch (input[i].grade){
   case 90 ... 100: input[i].letGrade='A';break;
   case 80 ... 89: input[i].letGrade='B';break;
   case 70 ... 79: input[i].letGrade='C';break;
   case 60 ... 69: input[i].letGrade='D';break;
   case 0 ... 59: input[i].letGrade='F';break;
  }

  fout<<input[i].name<<"\t\t\t"<<input[i].exam1<<"\t"<<input[i].exam2<<"\t\t"<<input[i].homework<<"\t\t"<<input[i].finalexam<<"\t"<<input[i].grade<<"\t"<<input[i].letGrade<<endl;
  }
  fout.close();
  for(int i=0;i<=19;i++){
    cout<<input[i].name<<"\t\t\t"<<input[i].exam1<<"\t"<<input[i].exam2<<"\t\t"<<input[i].homework<<"\t\t"<<input[i].finalexam<<"\t"<<input[i].grade<<"\t"<<input[i].letGrade<<endl;
  }
}
