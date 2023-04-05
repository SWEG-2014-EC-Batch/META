#include<iostream>
#include<cstring>
using namespace std;
int main()
{bool result,newresult;
    char name[][100]{"Izzat","Engida","selam","genzeb"};
    char newname[100];
    char password[][100]{"1234567","7894567","4567898","12345688"};
    char newpassword[100];
    cout<<"enter your name: ";
    cin.getline(newname,100);
    pr:
    cout<<"enter a password: ";
    cin.getline(newpassword,100);
    int length=strlen(newpassword);
    if(length>15 || length<6){
        cout<<"incorrect password length"<<endl;
        goto pr;
    }    
        for(int i=0;i<3;i++){
    result=stricmp(newname,name[i]);
    newresult=strncmp(newpassword,password[i],15);
    if(result==0 && newresult!=0){
        cout<<"you have inputed the wrong password";
    }else if(result!=0 && newresult==0){
        cout<<"you have inputed the wrong name";
    }
    else if(result==0 && newresult==0){
        cout<<"correct name\n";
        cout<<"correct password";
    }else{cout<<"try again";}break;}
    return 0;
}
