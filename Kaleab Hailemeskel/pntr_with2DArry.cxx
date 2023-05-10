#include <iostream>

using namespace std;

int main()
{
    float new_Arry[2][3]={45, 67, 75, 64, 83, 59};
    float *newArry[2][3];


    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++)
        {newArry[i][j]=&new_Arry[i][j];
        cout<<*(newArry[i][j])<<" ";} cout<<endl;}


    return 0;
}
