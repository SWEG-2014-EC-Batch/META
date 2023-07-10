#include<iostream>
#include<algorithm>
using namespace std;
struct students{
    string id;
    float mark[100],average;
    int rank;
};
void input();
void calc(students[],int,int);
void ranks(students[],int);
bool compare(students a, students b);
int main(){
    input();
}
void input(){
    int size,size2;
    cout<<"enter number of studnts: ";
    cin>>size;
    cout<<"enter number of marks: ";
    cin>>size2;
    students *info;
    info=new students[size];
    for(int i=0;i<size;i++){
        cout<<endl;
        cout<<"studnt id: ";
        cin>>info[i].id;
        cout<<endl;
        for(int j=0;j<size2;j++){
            cout<<"mark "<<j+1<<": ";
            cin>>info[i].mark[j];
        }
    }
    calc(info,size,size2);
}
void calc(students info[],int size,int size2){
   
    for(int i=0;i<size;i++){ 
        int sum=0;
        for(int j=0;j<size2;j++){
            sum+=info[i].mark[j];
        }
        info[i].average=double(sum)/size2;
    }
    ranks(info,size);
}
void ranks(students info[],int size){
    sort(info, info + size, compare);
    for (int i = 0; i < size; i++) {
        info[i].rank = i + 1;
        cout<<"rank: "<<info[i].rank<<" id: "<<info[i].id<<"  average mark: "<<info[i].average<<endl;
    }
}
bool compare(students a, students b) {
    return a.average > b.average;
}