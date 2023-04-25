#include<iostream>
using namespace std;
int main(){
int arr[10][10];
int arr2[10][10];int mul[10][10];
int row,column;
cout<<"enter the size of the row: ";
cin>>row;
cout<<"enter the size of the column: ";
cin>>column;
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        mul[i][j]=0;
    }
}

for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
       cout<<"enter the number for["<<i+1<<","<<j+1<<"]: ";
       cin>>arr[i][j]; 
    }
}cout<<"-----------------------------------------"<<endl;
cout<<"enter the for the second array "<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
         cout<<"enter the number for["<<i+1<<","<<j+1<<"]: ";
       cin>>arr2[i][j];
    }
}for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        mul[i][j]=0;
    for(int k=0;k<column;k++){
       mul[i][j]+=arr[i][k]*arr2[k][j];
    }
}}

    

for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        cout<<(mul[i][j])<<" ";
    }cout<<endl;
}
return 0;
}
