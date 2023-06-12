#include <iostream> 

using namespace std;

int main (){
  int size =6, i,j,h=0;
for (i=0; i<size; i++)
  cout <<"*";
  for (i=size ; i>=1; i--){
    for (j=0;j<size-1; j++){
        while (h!= (2*i-1)){
            if (h==0 || h==2*i-2)
            cout <<"*";
            else 
            cout << " ";
            h++;
        }
    }  h=0;
    cout << endl;
  }
  
    return 0;
}