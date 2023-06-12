#include <iostream>
using namespace std;

int main () {
  float PointVoltage[100], Velocity[32];
  int Years[100]={0};
  char List[30]={};
  
  int Voltages[]={89,75,82,93,78,95,81,88,77,82};
  double Slopes[]= {11.62,13.98,18.45,12.68,14.76};
  char Code[]={'f','j','m','q','t','w','z'};
  
  int Global[]={};
  int Local [10];

  int i,j,k,T,t;
  char Letters[][26]={},LettersOneD[]={};
  char X,x, Change;
  i=0;
  

i=0;
for (j=65;j<=91;j++){
    Change=j;
    Letters[0][i]=Change;
i++;

}
i=0;
for(j=97;j<=122;j++){
    Change=j;
    Letters[1][i]=Change;
    i++;
}

cout<<"Letters in order: "<<endl;
for(j=0;j<2;j++){
for(i=0;i<=25;i++){
cout<<Letters[j][i]<<" ";

}
cout<<endl;}

cout<<"Letters in pairs: "<<endl;
   
     for(j=0;j<5;j++){
         cout<<Letters[0][j]<<Letters[1][j]<<" ";
        }
        cout<<endl;
   
     for(j=5;j<10;j++){
         cout<<Letters[0][j]<<Letters[1][j]<<" ";
        }
        cout<<endl;
     for(j=10;j<15;j++){
         cout<<Letters[0][j]<<Letters[1][j]<<" ";
        }
        cout<<endl;
     for(j=15;j<20;j++){
         cout<<Letters[0][j]<<Letters[1][j]<<" ";
        }
        cout<<endl;     

     for(j=20;j<26;j++){
         cout<<Letters[0][j]<<Letters[1][j]<<" ";
        }
        cout<<endl;
}
