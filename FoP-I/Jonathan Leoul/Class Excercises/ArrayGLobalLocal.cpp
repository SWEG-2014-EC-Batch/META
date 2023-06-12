#include <iostream>
using namespace std;
int GlobalArray[5];

int main () {
int LocalArray[5];
int i,j;
cout<<"Global Array "<<endl;
for(i=0;i<5;i++){
cout<<GlobalArray[i]<<" ";
}
cout<<endl<<"Local Array "<<endl;

for(i=0;i<5;i++){
cout<<LocalArray[i]<<" ";
}

}