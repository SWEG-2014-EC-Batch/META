/*This program can take inputs, has menu, and lastly it can ran more 
than one time unless 16 is entered.
*/
#include<iostream>
using namespace std;
int main(){  int choice=0,column,row;
int n=1;
    cout<<"Welocome to printing patterns\nTo start please select from the followeing options"<<endl;
    cout<<"1. TO print numbers in a rectangle manner with and without user input"<<endl;
    cout<<"2. To print a rectangle with '*' pattern"<<endl;
    cout<<"3. To print a  hollow rectangle with '*' pattern"<<endl;
    cout<<"4. To print a half pyramid"<<endl;
    cout<<"5. to print an inverted half pyramid"<<endl;
    cout<<"6. to print an  inverted hollow pyramid"<<endl;
    cout<<"7. to print a full pyramid"<<endl;
    cout<<"8. to print inverted full pyramid"<<endl;
    cout<<"9. To print hollow full pyramid"<<endl;
    cout<<"10. to print a square pyramid with the same column of letters"<<endl;
    cout<<"11. to print a half pyramid with the same column number"<<endl;
    cout<<"12. half pyramid with space and same number of columns"<<endl;
    cout<<"13. to print a square pyramid with the same column of characters"<<endl;
    cout<<"14.to print a square pyramid with increasing characters"<<endl;
    cout<<"15.half pyramid with space and same column letters"<<endl;
    cout<<"16. to exit press 16 "<<endl;
    cin>>choice;
    int k=10;
if(choice==1){//O print numbers in a rectangle manner with and without user input
    cout<<"for fixed value"<<endl;
    for(int i=1;i<=4;i++){
for(int j=1;j<=10;j++){
cout<<k++<<" ";}cout<<endl;
    }
     cout<<"enter size of column: ";
     cin>>column;
     cout<<"enter size of row: ";
     cin>>row;
    for(int i=1;i<=row;i++){
for(int j=1;j<=column;j++){
cout<<k++<<" ";}cout<<endl;
    }}if(choice==2){//To print a rectangle with '*' pattern
     cout<<"enter size of column: ";
     cin>>column;
     cout<<"enter size of row: ";
     cin>>row;
for(int i=1;i<=row;i++){
    for(int j=1;j<=column;j++){
cout<<"* ";
    }cout<<endl;
}}
if(choice==3){//To print a  hollow rectangle with '*'
    cout<<"enter size of column: ";
     cin>>column;
     cout<<"enter size of row: ";
     cin>>row;
    for(int i=1;i<=row;i++){
    for(int j=1;j<=column;j++){
        if(i==1||i==row||j==1||j==column){cout<<"  *";}
        else { cout<<"   ";
        }
    }cout<<endl;
}}if(choice==4){//To print a half pyramid
     cout<<"enter size of row: ";
     cin>>row;
    for(int i=1;i<=row;i++){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }cout<<endl;
}}if(choice==5){//to print an inverted half pyramid
     cout<<"enter size of row: ";
     cin>>row;
for(int i=row;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }cout<<endl;
}}if(choice==6){//to print an  inverted hollow pyramid
    cout<<"enter size of row: ";
    cin>>row;
for(int i=row;i>=1;i--){
    for(int j=1;j<=i;j++){
        if(j==1||i==j||i==row){
        cout<<"* ";}
        else{cout<<"  ";}
    }cout<<endl;
}}
if(choice==7){//to print a full pyramid
    cout<<"enter size of row: ";
    cin>>row;
for(int i=1;i<=row;i++){
    for(int k=row;k>i;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }cout<<endl;
}}
if(choice==8){//to print inverted full pyramid
    cout<<"enter size of row: ";
    cin>>row;
for(int i=row;i>=1;i--){
    for(int k=row;k>i;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }cout<<endl;
}} if(choice==9){//To print hollow full pyramid
    cout<<"enter row size: ";
    cin>>row;
for(int i=1;i<=row;i++){
      for(int k=row;k>i;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        if(j==1||i==j||i==row){
        cout<<"* ";}
        else{cout<<"  ";}
    }cout<<endl;
}}if(choice==10){//to print a square pyramid with the same column of letters
    cout<<"enter size of column: ";
     cin>>column;
     cout<<"enter size of row: ";
     cin>>row;
for(int i=1;i<=row;i++){
    for(int j=1;j<=column;j++){
        cout<<i<<" ";
    }cout<<endl;}}
    if(choice==11){//to print a half pyramid with the same column number
        cout<<"enter the row: ";
        cin>>row;
        for(int i=1;i<=row;i++){
        
            for(int j=1;j<=i;j++){
        cout<<j<<" ";
            }cout<<endl;
        }
    }
    if(choice==12){//to print a half pyramid with sapce and the same column number
    cout<<"enter size of row: ";
    cin>>row;
for(int i=1;i<=row;i++){
    for(int k=row;k>i;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<i;
    }cout<<endl;
}
    }if(choice==13){//to print a square pyramid with the same column of characters
    char g='a';
        cout<<"enter size of column: ";
     cin>>column;
     cout<<"enter size of row: ";
     cin>>row;
for(int i=1;i<=row;i++){
for(int j=1;j<=column;j++){
   cout<<g<<" "; } g++;
   cout<<endl;
    }}

if(choice==14){char o='A';//to print a square pyramid with increasing characters
cout<<"enter size of column: ";
     cin>>column;
     cout<<"enter size of row: ";
     cin>>row;
for(int i=1;i<=row;i++){
for(int j=1;j<=column;j++){
    cout<<o++<<" ";}cout<<endl;}}
    if(choice==15){//half pyramid with space and same column letters
        cout<<"enter the row: ";
        cin>>row;
        for(int i=1;i<=row;i++){
            char a='A';
            for(int j=1;j<=i;j++){
                cout<<a++<<" ";
            }cout<<endl;
        }
    }while(choice!=16 && n>0){
        cout<<"Welocome to printing patterns\nTo start please select from the followeing options"<<endl;
    cout<<"1. TO print numbers in a rectangle manner with and without user input"<<endl;
    cout<<"2. To print a rectangle with '*' pattern"<<endl;
    cout<<"3. To print a  hollow rectangle with '*' pattern"<<endl;
    cout<<"4. To print a half pyramid"<<endl;
    cout<<"5. to print an inverted half pyramid"<<endl;
    cout<<"6. to print an  inverted hollow pyramid"<<endl;
    cout<<"7. to print a full pyramid"<<endl;
    cout<<"8. to print inverted full pyramid"<<endl;
    cout<<"9. To print hollow full pyramid"<<endl;
    cout<<"10. to print a square pyramid with the same column of letters"<<endl;
    cout<<"11. to print a half pyramid with the same column number"<<endl;
    cout<<"12. half pyramid with space and same number of columns"<<endl;
    cout<<"13. to print a square pyramid with the same column of characters"<<endl;
    cout<<"14.to print a square pyramid with increasing characters"<<endl;
    cout<<"15.half pyramid with space and same column letters"<<endl;
    cin>>choice;
     n++;
return 0;}}
