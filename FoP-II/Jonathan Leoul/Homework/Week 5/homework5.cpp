#include <iostream>
#include <fstream>
using namespace std;

void average();

int main () {
    int list[]={5,96,87,78,93,21,4,92,82, 85, 87, 6, 72, 69, 85, 75, 81, 73};
    int size=sizeof(list)/sizeof(int);
    ofstream fout("IntAve.txt",ios::out);
    for(int i=0;i<=size;i++){
        fout<<list[i]<<" ";
    }
     fout.close();

    average();
}
void average(){
    ifstream fin("IntAve.txt",ios::in);
    int j;
     while (fin >> j) {
        double average = 0;
        for (int i = 0; i < j; i++) {
            int num;
            fin >> num;
            average += num;
        }
        
        cout << "Average of group: " << (average) / j<< endl;
    }
    fin.close();}
    
//     for(int i=0;i<=16;i=list[i]){
//     for(int j=i+1;j<=list[i];j++){
//         average+=list[j];
//     } cout<<"Average= "<<average/list[i]<<endl;
//     average=0;
// }}