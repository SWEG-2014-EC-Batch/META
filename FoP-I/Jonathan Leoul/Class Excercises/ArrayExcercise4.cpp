#include <iostream>
using namespace std;

int main () {
int i,j,k,Fourth[5][6]={0};
for (i=0;i<=6;i++){
    if (i==0){
        Fourth[0][0]=1;
        Fourth[0][1]=2;
    }
    if (i==1){
        j=0;
        while(j<3){
        Fourth[1][j]=i+1;j++;}
    }
    if (i==2){
        while (j<5){
            Fourth[2][j]=0;
            j++;
        }
    }
    if (i==3){
        j=4;
    while (j<5){
        Fourth[3][j]=i+3;j++;
    }
    }
    if (i==4){
        j=1;
        while(j<5){
            Fourth[4][j]=i+5;j++;
        }
    }
}
        for(i=0;i<=4;i++){
            for(j=0;j<=5;j++){
                cout<<Fourth[i][j]<<" ";
            }
            cout<<endl;
        }

}

