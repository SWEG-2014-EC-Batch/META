#include<iostream>
#include <ctype.h>
using namespace std;
int main()
{int count=0;int j;
char testanswer[5]{'A','B','D','C','\0'};
char newtest[5];
for( j=0;j<4;j++){cout<<"enter your test results: ";
cin>>newtest[j];
newtest[j]=char(toupper(newtest[j]));}
for(int i=0;i<4;i++){
    if(newtest[i]==testanswer[i]){
        count++;
    }
} cout<<"you have got "<<count<<"/4"<<endl;
return 0;
}