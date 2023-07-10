#include<iostream>
using namespace std;
typedef int Bool;
#define true 1
#define false 0
struct town{
    string name;
    int population;
    Bool airport;
};
void output(town);
int main(){
    town info;
    cout<<"enter town's name: ";
    getline(cin, info.name);
    cout<<"enter population: ";
    cin>>info.population;
    cout<<"does the town have an airport (true or false): ";
    cin>>info.airport;
    output(info);
}
void output(town info){
    cout<<"town's name: "<<info.name<<endl;
    cout<<"population: "<<info.population<<endl;
    cout<<"has airport: "<<(info.airport?"NO":"YES")<<endl;
}
