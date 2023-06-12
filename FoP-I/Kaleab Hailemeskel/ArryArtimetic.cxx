#include <iostream>
using namespace std;

int main()
#define size 3
{ int i=0,num1,numArray[size],sum=0;
        for(int i=0;i<size;i++){
             cout<<"Enter the element of numArrayber: "<<i+1<<endl;
             cin>>numArray[i];
             sum+=numArray[i];
             }


cout<<"Sum is : "<<sum<<endl;
for(int i=0;i<size;i++){
    cout<<numArray[i]<<" ";
    }
	
return 0;	
}