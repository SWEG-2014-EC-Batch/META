#include <iostream>
using namespace std;

int main () {
int Array[]={1,2,3,4,11,6,7,8,9},Large=0,Large2=0,Large3=0;
int Size=sizeof(Array)/sizeof(int);
cout<<Size<<endl;

for (int i=0;i<=Size;i++){
  if(Large<(Array[i])){
    Large3=Large2;
    Large2=Large;
    Large=Array[i];
}  else if(Array[i]>Large2){
    Large3=Large2;
    Large2=Array[i];
}else if (Array[i]>Large3){
    Large3=Array[i];
}
}
cout<<Large<<" "<<Large2<<" "<<Large3;

    return 0;
}