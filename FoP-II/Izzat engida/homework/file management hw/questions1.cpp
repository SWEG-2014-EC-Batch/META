#include<iostream>
#include<fstream>
using namespace std;
void read(char*,int*,int*);
int main(){
    int arr[100],count;
read("izzat.txt",arr,&count);
for(int i=0;i<count;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
}
void read(const char*words,int*arr,int*count){
    fstream file(words);
    if(file.is_open()){
*count=0;
while(file>>arr[*count]){
    (*count)++;
}
  file.close();  }
    else{
        cout<<"error the file was not opened"<<endl;
    }
}