#include <iostream>
using namespace std;

int main () {
struct person {
    char name[20],gender;
    int age;
    float height,weight;
}P1[100];
int N;
cout<<"Insert the number of students to store informations: ";
cin>>N;

for(int i =0;i<N;i++){
    cout<<endl;
cout<<"Insert name: ";
cin.ignore();
cin.get(P1[i].name,19);
cout<<endl<<"Insert gender (m/f): ";
cin>>P1[i].gender;
cout<<endl<<"Insert age :";
cin>>P1[i].age;
cout<<endl<<"Insert height: ";
cin>>P1[i].height;
cout<<endl<<"Insert weight: ";
cin>>P1[i].weight;

cout<<endl<<"Name: "<<P1[i].name;
cout<<endl<<"Gender: "<<P1[i].gender<<endl<<"Age: "<<P1[i].age;
cout<<endl<<"Height: "<<P1[i].height<<"Weight: "<<P1[i].weight<<endl;
cout<<endl<<"BMI: "<<P1[i].weight/(P1[i].height*P1[i].height);
}

}