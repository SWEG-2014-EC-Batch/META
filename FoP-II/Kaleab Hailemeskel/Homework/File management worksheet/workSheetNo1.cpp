#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

	int count = 0 ;
	int arrynum[20];

void read(){
	ifstream fin;
	char fname[20];
	
	cout<<"Please enter the file name with it's data type: ";
	cin.getline(fname, 20);

	fin.open(fname, ios::out);
	if(!fin){
		cout<<"sorry such file did't exist.\n";
		exit(1);
	}
	while(fin){
		int num, i=0;
		fin>>num;
		arrynum[i] = num; i++;
		count++;
	}
	fin.close();
}

int main(){
	
	read();
	cout<<"Count = "<<count - 1<<"\n"; // since it allways counting eof as double	
	
	return 0;
}
