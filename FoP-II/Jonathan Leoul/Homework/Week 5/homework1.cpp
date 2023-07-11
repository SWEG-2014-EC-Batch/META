#include <iostream>
#include <fstream>
using namespace std;


void read(char name[], int list[], int &counter);
int main () {
    int collection[100], count=0;
    char file[100];

    read(file,collection,count);
}
void read(char name[], int list[], int &counter){
    cout<<"Enter your file name: ";
    cin.ignore();
cin.getline(name,35);
    ofstream fout(name,ios::out);
    cout<<"Enter your list of integers (Press 'e' to exit): \n";
    char in;
    while (fout){
cout<<"Enter number "<<(counter+1)<<":";
cin>>in;
if(in=='e') break;
list[counter]=in-'0';
fout<<list[counter];
counter++;
    }
    fout.close();
    cout<<"Numbers stored successfully ";

}
