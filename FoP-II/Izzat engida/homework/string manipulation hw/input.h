#include<iostream>
using namespace std;
void input(char word[],int size){int choice;
char again;
ab:
cout<<"choose an input"<<endl;
cout<<"1.to find the length and to find the numbers of vowel and consonants "<<endl;
cout<<"2. compare two string of words"<<endl;
cout<<"3. to reverse the word "<<endl;
cout<<"4.To change the word to an uppercase "<<endl;
cout<<"5.To change the word to lower case "<<endl;
cin>>choice;
if(choice==1){
cout<<"enter the length of the string: ";
cin>>size;
cout<<"enter the word: ";
cin.ignore();
cin.getline(word,size);
length_wrd(word,size);
}
else if(choice==2){
    char *word1,*word2;
int size1,size2;
cout<<"enter the size of the first word: ";
cin>>size1;
cout<<"enter the size of the second word:  ";
cin>>size2;
word1=new char[size1+1];
word2=new char[size2+1];
cout<<"enter the first word: ";
cin.ignore();
cin.getline(word1,size1+1);
cout<<"enter the second word: ";
cin.getline(word2,size2+1);
compare(word1,word2,size1,size2);
}
else if(choice==3){
cout<<"enter the size of the word: ";
cin>>size;
cout<<"enter the word: ";
cin.ignore();
cin.getline(word,size);
cout<<"the reversed word is: ";
rev_wrd(word,size);
}
else if(choice==4){
cout<<"enter the size of the word: ";
cin>>size;
cout<<"enter the word: ";
cin.ignore();
cin.getline(word,size);
cout<<"the uppercase word is: ";
upper_wrd(word,size);
}
else if(choice==5){
cout<<"enter the size of the word: ";
cin>>size;
cout<<"enter the word: ";
cin.ignore();
cin.getline(word,size);
cout<<endl<<endl;
cout<<"the lowercase word is: ";
lower_wrd(word,size);
}
cout<<endl;
cout<<"do you want to continue y/n: ";
cin>>again;
if(again=='y'||again=='Y'){
    goto ab;
}
else{
    cout<<endl;
    cout<<"Thank you for using me, good bye"<<endl;
    exit(0);
}
}
