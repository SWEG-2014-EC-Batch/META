//bmi calculator
#include<iostream>
#include"string"
using namespace std;
int main (){ int k,n,f,m;
    cout<<"welcome\nchoose from the following options"<<endl;
    cout<<"1.Bmi of one person"<<endl;
    cout<<"2.bmi of known people"<<endl;
    cout<<"3. bmi of unkown people"<<endl;
    cin>>k;
  float bmi,height,weight;
  char g;
  // for a single person
  if(k==1){
    cout<<"eneter your weight in kg: ";
  cin>>weight;
  cout<<"enter your height in meter: ";
  cin>>height;
  cout<<"if you are male enter: M or m\nif you are female press: f or F "<<endl;
  cout<<"what is your gender: ";
  cin>>g;
  bmi=weight/(height*height);
  if(g=('m'||'M')){
    if(bmi>=25){
      cout<<"you are overwight with bmi of: "<<bmi<<endl;
    }else if(bmi<=19){
      cout<<"you are under weight with bmi of: "<<bmi<<endl;

    }else{
      cout<<"you have a normal weight with bmi of: "<<bmi<<endl;
    }
  }else if(g=('f'||'F')){
    if(bmi>=23){
      cout<<"you are overweight with bmi of: "<<bmi<<endl;

    }else if(bmi<=18){
      cout<<"you are under weight with bmi of: "<<bmi<<endl;

    }else{
      cout<<"you have normal weight with bmi of: "<<bmi<<endl;
    }
  }else{cout<<" ";}
 } 
 //for multiple known number of people
if(k==2)
{cout<<"2+/ bmi of known people"<<endl;
      for(int i=1;i<=n;i++){
cout<<"enter the number of people: ";
cin>>n;
 cout<<"eneter your weight in kg: ";
  cin>>weight;
  cout<<"enter your height in meter: ";
  cin>>height;
  cout<<"if you are male press: m or M \nif you are female press: f or F"<<endl;
  cout<<"what is your gender: ";
   cin>>g;
bmi=weight/(height*height);
 if(g=('m'||'M')){
    if(bmi>=25){
      cout<<"you are overwight with bmi of: "<<bmi<<endl;
    }else if(bmi<=19){
      cout<<"you are under weight with bmi of: "<<bmi<<endl;

    }else{
      cout<<"you have a normal weight with bmi of: "<<bmi<<endl;
    }
  }else if(g=('f'||'F')){
    if(bmi>=23){
      cout<<"you are overweight with bmi of: "<<bmi<<endl;

    }else if(bmi<=18){
      cout<<"you are under weight with bmi of: "<<bmi<<endl;

    }else{
      cout<<"you have normal weight with bmi of: "<<bmi<<endl;
    }
  }else{cout<<" ";
    }
  }
  //for multiple uknown number of people
if(k==3){
  cout<<"eneter your weight in kg(to exit press 0): ";
  cin>>weight;
  cout<<"enter your height in meter: ";
  cin>>height;
  cout<<"if you are male press: M or m \nif you are female press: f or F"<<endl;
  cout<<"what is your gender: ";
   cin>>g;
   bmi=weight/(height*height);
   if(g=('m'||'M')){
    if(bmi>=25){
      cout<<"you are overweight with bmi of: "<<bmi<<endl;
    }else if(bmi<=19){
      cout<<"you are underweight with bmi of: "<<bmi<<endl;

    }else{
      cout<<"you have a normal weight with bmi of: "<<bmi<<endl;
    }
  }else if(g=('f'||'F')){
    if(bmi>=23){
      cout<<"you are overweight with bmi of: "<<bmi<<endl;

    }else if(bmi<=18){
      cout<<"you are under weight with bmi of: "<<bmi<<endl;

    }else{
      cout<<"you have normal weight with bmi of: "<<bmi<<endl;
    }
  }else{cout<<"good bye"; return 1;}
  while(height!=0 && weight!=0) {  
 cout<<"eneter your weight in kg(to exit press 0): ";
  cin>>weight;
  cout<<"enter your height in meter: ";
  cin>>height;
  cout<<"if you are male press: M or m \nif you are female press: F or f "<<endl;
  cout<<"what is your gender: ";
   cin>>g;
   }
}return 0;
}}