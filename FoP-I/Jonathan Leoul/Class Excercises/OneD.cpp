#include <iostream>
using namespace std;

int main () {


  int i,j,k;
  char One[52];
  char Change;
  i=0;
  for(j=65;j<=91;j++){
    Change=j;
    One[i]=Change;
  i++;
  }
   for(j=97;j<=122;j++){
    Change=j;
    One[i]=Change;
  i++;
  }
i=0;
for (i=0;i<=52;i++){
    cout<<One[i]<<" ";
}

}