#include <iostream>
#include <fstream>
using namespace std;
struct bank{
	int accNumber = 1000;
	char f_Name[10], l_Name[15];
	double balancce;
};


int main(){
	bank user[5], fuser[5];
	int accnum = 0 ;
	// Delete the comment if you want to rewrite the file
/*
	ofstream fout;
	fout.open("BankAccounts.txt", ios::out);
	cout<<"\t****** Account Information ****** \n";
	for(int i=0; i<5; i++){
	
		cout<<"Enter First Name "<<i+1<<": ";
		cin>>user[i].f_Name;
		cout<<"Enter Last Name "<<i+1<<": ";
		cin>>user[i].l_Name;
		cout<<"Deposit some money: ";
		cin>>user[i].balancce; 
		user[i].accNumber = user[i].accNumber + i;
		cout<<"User "<<i+1<<" has Account Number of "<<user[i].accNumber<<"\n\n";
	
		fout.write((char *)& user[i], sizeof(bank));
		
	//	fout<<"\n";   a big Mistake
	
	}
	cout<<"File writing end succesfuly. \n";
	fout.close();
*/	
	long pos;
	ifstream fin;
	fin.open("BankAccounts.txt", ios::in  | ios::binary);
		while(accnum < 1000 || accnum> 1004  ){
	
		cout<<"Enter Account number to find users information: ";
		cin>>accnum;
		if(accnum>1004 || accnum<1000) cout<<" Account numbers are between (1000 -- 1004).  Please Try Again...\n";
	}
	
	fin.seekg(0); int i = 0;
	while ( !fin.eof() ){
		fin.read((char* )&fuser[i], sizeof(fuser[i]));
		
		if(fuser[i].accNumber == accnum){
			cout<<"found it\n";
					
			cout<<"\nName: "<<fuser[i].f_Name<<" "<<fuser[i].l_Name<<"\n";
			cout<<"Balance: "<<fuser[i].balancce<<endl; break;
		} 
	
		
	}
	
	fin.close()
;	
	
	return 0;
}
