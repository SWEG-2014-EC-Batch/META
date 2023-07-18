#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int numin;
	int sum = 0;
	float f_sum, num; 
	
	ifstream fin;
	fin.open("GroupOfNumbers.txt", ios::in);
	while(!fin.eof()){
		fin>>numin;
		num= numin; 
	
		for(int i=1; i <= num; i++){
			fin>>numin;
			sum += numin;
		} f_sum = sum;
		
	if(num>0)	cout<<"Average of group "<<num<<" is: "<<f_sum/num<<"  \n";
	}
	
	return 0;
}
