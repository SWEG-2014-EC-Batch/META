#include <iostream>

using namespace std;

struct cartesian{
    float xaxis, yaxis;
    };
    
cartesian readfun;
    
cartesian readpoint (){
    float xAxis, yAxis;
    
    cout<<"Enter X--coordinate: ";
    cin>>xAxis;
    cout<<"Enter Y--coordinate: ";
    cin>>yAxis;
    readfun.xaxis = xAxis;
    readfun.yaxis = yAxis;
    
    return readfun; 
    }
    
void printpoint( cartesian parameter){
    cout<<"\n*---------------------------------------------------------------*"<<endl;
    cout<< "\t\t\t( "<<parameter.xaxis<<", "<< parameter.yaxis<<" )"<<endl;
    cout<<"*---------------------------------------------------------------*"<<endl;
    
 
    }

int main()
{
	
	printpoint(readpoint());

return  0;
}