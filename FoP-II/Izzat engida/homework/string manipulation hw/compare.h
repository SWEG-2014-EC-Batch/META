#include<iostream>
using namespace std;

void compare(char word1[],char word2[],int size1,int size2)
{
for(int i=0;word1[i]!='\0'||word2[i]!='\0';i++){
   if(word1[i]!=word2[i]){
      if(word1[i]<word2[i]){
         cout<<"the first word come first"<<endl;
         return;
      }
      else{
         cout<<"the second word comes first";
         return;
      }
   }
}cout<<"the words are the same";
}


 

