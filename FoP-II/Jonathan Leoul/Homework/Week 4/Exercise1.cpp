#include <iostream>
using namespace std;

int main () {
struct student {
    long id;
    char name[15];
    int testmark;
    int finalmark;
};

int N;
cout<<"Insert the number of students to store informations: ";
cin>>N;

student stud[100];

for( int i=0;i<N;i++){
    cout<<endl<<" Number "<<i<<endl;
cout<<"Insert Student ID number: ";
cin>>stud[N].id;
cout<<endl<<"Input name of the student: ";
cin.ignore();
cin.getline(stud[N].name,13);
cout<<endl<<"Input Test mark: ";
cin>>stud[N].testmark;
cout<<endl<<"Input Final exam mark: ";
cin>>stud[N].finalmark;
cout<<endl<<"Name : ";
cout<<stud[N].name;

cout<<endl<<"ID : "<<stud[N].id<<endl;
cout<<"Total mark = "<<stud[N].finalmark+stud[N].testmark;
}
}