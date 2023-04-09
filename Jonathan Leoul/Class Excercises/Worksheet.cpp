#include <iostream>
using namespace std;

int main () {
int nums [10]={1,2,3,4,5,6,7,8,9,10},nums2[]={};
int j=0;
for (int i=1;i<=9;i=i+2){
nums[i]=nums[i]*2;
nums2[j]=nums[i];
j++;
}
for (j=0;j<=4;j++){
    cout<<nums2[j]<<",";
}

    return 0;
}