#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct employee{
	char name[15];
	float rate;
	float hours;
	float regularPay;
	float overTime ;
	float overTimepay;
	float grossPay;
};

int main(){
	
	int i;
	employee smn[5], any[5], fsmn[5];
	ofstream fout;
		fout.open("employee1.txt", ios::out );
	for( i=0; i<4; i++){
		
		cout<<"Enter name for person "<<i + 1<<": ";
		cin.getline(smn[i].name,15);
		cout<<"Enter payRate for person "<<i + 1<<": ";
		cin>>smn[i].rate;
		cout<<"Enter working Hrs for person "<<i + 1<<": ";
		cin>>smn[i].hours;
		cout<<"\n\n";
		
		fout.write((char *) & smn[i], sizeof(employee));
		
		cin.ignore();
		
	}

	
	fout.close();
	ifstream fin;
		fin.open("employee1.txt", ios::in);
	
		for(i=0; i<4; i++){
		fin.read((char *) & fsmn[i], sizeof(employee));
		strcpy (any[i].name ,fsmn[i].name);
		
	if(fsmn[i].hours <= 40){
				
				any[i].overTimepay = 0;
				any[i].regularPay = smn[i].rate * fsmn[i].hours;}
	else if(fsmn[i].hours > 40){
			fsmn[i].overTime = fsmn[i].hours - 40;
			fsmn[i].hours = 40;
			any[i].regularPay = fsmn[i].rate * fsmn[i].hours;
			any[i].overTimepay = fsmn[i].rate * 1.5 * fsmn[i].overTime;
	}
	
	any[i].grossPay = any[i].regularPay + any[i].overTimepay;
		}
		
	fin.close();
	
	
	fout.open("employee1.txt", ios::out);
	for(int i=1; i<10; i++){fout<<"########";	}
	
	fout<<"\n\t"<<"Name"<<"\t\tRegular Pay"<<"\tOverTime Pay"<<"\tGross Pay\n\n";
	for(int i=0; i<4; i++)
	{
	fout<<"\t"<<any[i].name<<"\t"<<any[i].regularPay<<"\t\t"<<any[i].overTimepay<<"\t\t"<<any[i].grossPay<<"\n";}
	for(int i=1; i<10; i++){fout<<"########";	}
	fout.close();
	return 0;
}
