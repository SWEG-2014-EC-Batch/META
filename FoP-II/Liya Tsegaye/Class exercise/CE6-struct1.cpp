#include <iostream>
using namespace std;
struct student {
    int ID;
    char name [20];
    float testMark, finalMark;
};

int main(){
    student stud;
    cout << "Enter name: " <<endl;
    cin>> stud.name;
    cout << "Enter testMark: " <<endl;
    cin>> stud.testMark;
    cout << "Enter finalMark: " <<endl;
    cin>> stud.finalMark;
float Total = stud.finalMark+stud.testMark;
    cout << '\t'<<"Name"<<"\t test mark"<<"\t final mark"<< "\t Total marks\n";
    cout <<'\t' << stud.name<<"\t\t"<<stud.testMark<<"\t\t"<<stud.finalMark<<"\t\t"<<Total;
}