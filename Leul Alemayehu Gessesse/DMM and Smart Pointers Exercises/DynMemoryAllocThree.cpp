#include <iostream> 
using namespace std; 
int main(){
    int studNum, courseNum;
    cout<< "How many students?";
    cin>> studNum;
    cout<< "How many Courses? "; cin>>courseNum;
    float *studMark;
    studMark = new float[studNum* courseNum];
    char **studName = new char*[studNum];
    for(int i=0; i < studNum; i++)
        studName[i]= new char [30]; //I ADDED THE SEMICOLON HERE MYSELF IT WASN'T PRESENT IN THE IMAGE
    cout<<"Input Name and marks for Students\n"; 
    for(int i=0; i < studNum; i++){
        cout<<"Enter the "<<i+1<<" Student \n";
        cout<<"Name:"; cin.ignore();
        gets(studName[i]);
    for(int j=0;j<courseNum;j++){
        cout<<"Mark "<<j+1<<". ",
        cin>>studMark[i+1*j];
    }}
for(int i=0; i< studNum; i++){
    cout<<"\nName: "<<studName[i]<<endl<<"Marks: ";
    for(int j=0; j<courseNum; j++)
        cout<<studMark[i+1*j]<<", ";
    cout<<endl;
}
delete []studMark;
}