
using namespace std;

int stringLength(char *ptr){
    int counter=0;
    while(*ptr!='\0'){
counter++;
ptr=ptr+sizeof(char);
    };
    return counter;
}

int vowelChecker(char *ptr){
   int length= stringLength(ptr)+1;
   int vowelCounter=0;
    for (int i=0;i<length;i++){
        if(ptr[i]=='a'|| ptr[i]=='e'|| ptr[i]=='i'|| ptr[i]=='o'|| ptr[i]=='u'|| ptr[i]=='A'|| ptr[i]=='E'|| ptr[i]=='I'|| ptr[i]=='O'|| ptr[i]=='U')
      {  vowelCounter++;}
    }
    return vowelCounter;
}


int consonantChecker(char *ptr){
   int length= stringLength(ptr);
   int checker=0;
   int consonantCounter=0;
    for (int i=0;i<length;i++){
        checker=ptr[i];
        if (checker<65 || (checker>90 && checker<97) ||checker>122 || ptr[i]==' '){
            continue;
        }
        else if(ptr[i]!='a'&& ptr[i]!='e'&& ptr[i]!='i'&& ptr[i]!='o'&& ptr[i]!='u'&&  ptr[i]!='A'&& ptr[i]!='E'&& ptr[i]!='I'&& ptr[i]!='O'&& ptr[i]!='U')
      { consonantCounter++;}
    }
    return consonantCounter;
}

void stringReverse(char *ptr){
  int length= stringLength(ptr);
  char reversed[length+1]={};
  for (int i=length, j=0;i>-1,j<(length+1);i--,j++){
       reversed[j]=ptr[i];
       
  } 
   for(int i=0;i<=length;i++){
    cout<<reversed[i];
   }

}
void stringCompare(char *ptr,char *ptr1){
int length1=stringLength(ptr);
int length2=stringLength(ptr1);
if(length1>length2){
    cout<<"1";
} else if(length1<length2){
    cout<<"-1";
}
else if(length1==length2){
    cout<<"0";
}
}

void convertToLowercase(char *ptr){
int length=stringLength(ptr);
int change;
char converted[length+1];
for(int i=0;i<=length;i++){
    change=ptr[i];
    if(change>=65 &&change<=90){
        change+=32;
        converted[i]=change;
    } else converted[i]=ptr[i];
}
for(int i=0;i<=length;i++){
    cout<<converted[i];
}
}

void convertToUppercase(char *ptr){
int length=stringLength(ptr);
int change;
char converted[length+1];
for(int i=0;i<=length;i++){
    change=ptr[i];
    if(change>=97 &&change<=122){
        change-=32;
        converted[i]=change;
    } else converted[i]=ptr[i];
}
for(int i=0;i<=length;i++){
    cout<<converted[i];
}
}
