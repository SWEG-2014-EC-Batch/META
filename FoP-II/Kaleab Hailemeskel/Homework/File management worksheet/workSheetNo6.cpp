#include <iostream>
#include <fstream>

using namespace std;

struct stud{
	char name[20],  chargrade;
	float ex1, 
		  ex2, 
		  homeWork, 
		  final,
		  grade;
		  
} student[20];

float getFinalGrade(stud );
char assign(float );

int main()
{
	
for(int i=0; i<3; i++){
	
	cout<<"Name of Student(1'st and last name) "<<i+1<<": ";

	cin.getline(student[i].name, 20);
	cout<<"\tPoint of Exercise 1 of Student "<<i+1<<": ";
	cin>>student[i].ex1;
	cout<<"\tPoint of Exercise 2 of Student "<<i+1<<": ";
	cin>>student[i].ex2;
	cout<<"\tPoint of Hoemwork of Student "<<i+1<<": ";
	cin>>student[i].homeWork;
	cout<<"\tFinal point of Student "<<i+1<<": ";
	cin>>student[i].final;
	student[i].grade = getFinalGrade(student[i]);
	student[i].chargrade = assign(student[i].grade);
		cin.ignore();
}		
ofstream fout;
fout.open("Students Roster.txt", ios::out);
for(int i=1; i<=7; i++ )fout<<"---------------";fout<<"\n";
fout<<"|\tName\t\t\tExersice 1\t\tExersice 2\tHomework\tFinal\tGrade\t|\n";
for(int i=1; i<=7; i++ )fout<<"---------------"; fout<<"\n";
for(int i=0; i<3; i++){
	fout<< student[i].name<<"\t\t"<<student[i].ex1<<"\t\t\t"<<student[i].ex2<<"\t\t"<<student[i].homeWork<<"\t\t"<<student[i].final<<"\t"<<student[i].chargrade<<"\n";
}
for(int i=1; i<=7; i++ )fout<<"---------------";fout<<"\n";
fout.close();



	return 0;

}

float getFinalGrade(stud smn ){
	return ((smn.ex1)*0.2 + 0.2*(smn.ex2) + 0.35 * (smn.homeWork) + 0.25*(smn.final)) ;
}

char assign( float num){
	if(num >= 90 && num <= 100) return 'A' ;
	if(num >= 80 && num <= 89) return 'B' ;
	if(num >= 70 && num <= 79) return 'C' ;
	if(num >= 60 && num <= 69) return 'D' ;
	if(num <= 60) return 'F' ;
		
}
