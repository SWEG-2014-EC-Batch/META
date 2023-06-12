#include<iostream>
using namespace std;
int main(){
    int ar[2][3]{45,67,75,64,83,59};
     int* arr[2][3];
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
       arr[i][j]=&(ar[i][j]);
        }
     }
   for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<*(arr[i][j])<<" ";
    }cout<<endl;
   }
return 0;
}