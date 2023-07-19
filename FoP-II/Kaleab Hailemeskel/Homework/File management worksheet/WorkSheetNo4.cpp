#include <iostream>
#include <fstream>
using namespace std;

struct empl{
	int idNo;
	char sex;
	float h_wage;
	float totalYear;
	
	
}worker,worker1;

	char ans = 'y';
	 
	bool tag = false;
	int choice, srch;
	float hrs;
	
	ofstream fout;
	ifstream fin;

void append();
void calcMonth();
void  print();
void edit();
void open();


int main()
{

one:
	cout<<"Choice: \n";
	cout<<"\t1. To Add record of employees\n";
	cout<<"\t2. To claculate mothly wage of an employee\n";
	cout<<"\t3. To Edit a record\n";
	cout<<"\t4. To Print all records\n";
	cout<<"\n\t6. To reopen all records\n";

	cin>>choice;
	
	if( choice == 6) {  open();       }
	
	if( choice == 1) {	append();     }
		
	if( choice == 3) {  edit();       }
	
	if( choice == 2) {  calcMonth();  }

	if( choice == 4) {	print();      }

cin.ignore();
	cout<<"Do want to continue using z Program?(Y/N): ";
	cin>>ans;
	if(ans == 'y' || ans == 'Y' ) goto one;

	return 0;
	
	
}



void append(){
		//	cin.ignore();
		cout<<"********* New Employee *********\n";
		cout<<"\tId Number: ";
		cin>>worker1.idNo;
		cout<<"\tSex(M/F): ";
		cin>>worker1.sex;
		cout<<"\tHourly Wage: ";
		cin>>worker1.h_wage;
		cout<<"\tYear with the company: ";
		cin>>worker1.totalYear;
		
	
	fout.close();
	fout.open("tempo.txt", ios::out);
	
	fin.open("EmployeeEx.txt", ios::in);
	
		while(!fin.eof()){
		fin.read((char*)&worker, sizeof(empl));
		if(worker1.idNo <= worker.idNo){
			fout.write((char*)& worker1, sizeof(empl));
			tag = true;
			break;
		}
		else{
		fout.write((char*)& worker, sizeof(empl));
		}
	}
	if(tag == false){
		fout.write((char*)& worker1, sizeof(empl));
	}
	else if(!fin.eof()){
		while(!fin.eof()){
			fin.read((char*)& worker, sizeof(empl));
			fout.write((char*)& worker, sizeof(empl));
		}
	}
	
	fout.close();
	fin.close();
	remove("EmployeeEx.txt");
	rename("tempo.txt", "EmployeeEx.txt");
	
}

void calcMonth(){
	fin.open("EmployeeEx.txt", ios::in);
cin.ignore();
	cout<<"Whose employee do u want to calculate monthly pay (Enter ID No.): ";
	cin>>srch;
while(fin){
	fin.read((char*)& worker, sizeof(empl));
	if(worker.idNo == srch){
		cout<<"How many hours did the employee work in a month: ";
		cin>>hrs;
		cout<<"This employee has a monthly pay of "<<worker.h_wage * hrs<<" Birr. \n";
		
	}
}
		fin.close();
}

void print(){
	fin.open("EmployeeEx.txt", ios :: in);
		cout<<"ID No.\tSex\tHourly-Wage\tYears-with-the-company\n\n";
		while(fin){
			fin.read((char*)& worker, sizeof(empl));
			cout<<worker.idNo<<"\t"<<worker.sex<<"\t"<<worker.h_wage<<"\t\t"<<worker.totalYear<<"\n";
		}
	
		
		fin.close();
	
}

void edit(){
	
	long pos;
	fstream fio("EmployeeEx.txt", ios::in | ios::out);
	cin.ignore();
	cout<<"Whose employee info does u want to Modify (Enter ID No.): ";
	cin>>srch;
	while(fio){
		pos = fio.tellg() ;
		fio.read((char*)& worker, sizeof(empl));
		if(worker.idNo == srch){
			cout<<"Which choice do you want to modify: \n";
			cout<<"\t1. Hourly wage: \n";
			cout<<"\t2. Total years an employee have worked : \n";
			cout<<"\t3. Both: \n";
			cin>>choice;
			 switch(choice){
			 	case 1:{
			 		cout<<"Hourly wage: ";
			 		cin>>worker.h_wage;
					break;
				 }
				 case 2:{
				 	cout<<"Total years an employee have worked : ";
				 	cin>>worker.totalYear;
					break;
				 }
				 case 3:{
				 	cout<<"\t1. Hourly wage: ";
				 	cin>>worker.h_wage;
					cout<<"\t2. Total years an employee have worked : ";
				 	cin>>worker.totalYear;
					break;
				 }
				 
				 
			 }
			
		fio.seekg(pos);
		fio.write((char*)& worker, sizeof(empl));
			
		}
	}
	
	fio.close();
	
}

void open(){
	fout.open("EmployeeEx.txt", ios::out);
	while(ans == 'y' || ans == 'Y'){
	
		cout<<"********* former Employee *********\n";
		cout<<"\tId Number: ";
			cin.ignore();
		cin>>worker.idNo;
		cout<<"\tSex(M/F): ";
		cin>>worker.sex;
		cout<<"\tHourly Wage: ";
		cin>>worker.h_wage;
		cout<<"\tYear with the company: ";
		cin>>worker.totalYear;
		fout.write((char *)& worker, sizeof(empl));
		cout<<"\n DO u want to add more data in to the file?(y/n) :";
		cin>>ans;
	}
	fout.close();
	cout<<"File stored successfuly.....\n";
	ans = 'y';
}
