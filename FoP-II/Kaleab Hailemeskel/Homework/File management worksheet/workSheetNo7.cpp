#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

struct record{
	int recNo, quantity;
	char toolName[20];
	float cost;
};

int main()
{	
	char tag = 'y';
	record rec1;
	int num;
	
	ofstream fout;
	ifstream fin;
one:
	cout<<"Choice: \n";
	cout<<"\t1. To Add record of tools\n";
	cout<<"\t2. To Delete a record\n";
	cout<<"\t3. To Edit a record\n";
	cout<<"\t4. To Print all records\n";
	cout<<"\t5. Do u want to Discard the file:    ";
	cin>>num;
	
	if(num == 1){
		
		// appending
	
		fout.open("hardware.dat", ios::app);
		if(!fout){
			cout<<"sorry this folder cannot be opened. \n";
			getch();
			exit(1);
		}
		cin.ignore();
		while(tag == 'y' || tag == 'Y'){
			cout<<"\n\t******** New Tool********\n";
	
			cout<<"Insert ToolName: ";
			cin.getline(rec1.toolName, 20);
			cout<<"Insert RecordNumber of the tool: ";
			cin>>rec1.recNo;
			cout<<"Insert it's Quantity: ";
			cin>>rec1.quantity;
			cout<<"Insert it's Cost: ";
			cin>>rec1.cost;
			fout.write((char*)& rec1, sizeof(record));
			cout<<"Do you want to continue inserting ToolList(Y/N): ";
			cin>>tag;
			cin.ignore();
		}
			fout.close();
	
	}
	
	if(num == 4){
		
		//	print
		
		fin.open("hardware.dat", ios :: in);
		cout<<"\nRecorNo\t\tToolName\t\t\tQuantity\tCost\n";
		while(fin){
			fin.read((char*)& rec1, sizeof(record));
			cout<<rec1.recNo<<"\t\t"<<rec1.toolName<<"\t\t\t"<<rec1.quantity<<"\t\t"<<rec1.cost<<"\n";
	
		}
	
		cout<<"\nThat's IT......\n";
		fin.close();
	}
	if(num == 2){
	
		// delete a record
		fin.open("hardware.dat", ios::in);
		fout.open("tempo.dat", ios::out);
		cin.ignore();
		cout<<"Which ToolRecord do you want to delete (enter RecordNo) : ";
		cin>>num;
		while(!fin.eof()){
			fin.read((char*)&rec1, sizeof(record));
			if(rec1.recNo != num) {	fout.write((char*)&rec1, sizeof(record));	}
		
		}
		cout<<"Deletion Complete\n";
		fin.close();
		fout.close();	
		remove("hardware.dat");
		rename("tempo.dat", "hardware.dat");
	}
	
	if(num == 3){
			//	edit Record
	
	long pos;
	fstream fio("hardware.dat", ios::in | ios::out);
	cin.ignore();
	cout<<"Which ToolRecord do you want to Edit (enter RecordNo): ";
	cin>>num;	
	while(fio){
		pos = fio.tellg() ;
		fio.read((char*)& rec1, sizeof(record));
		if(rec1.recNo == num){
		cout<<"\nwhich Rart of the record that u swant to change: \n";
				cout<<"\t1. Tool Name\n";
				cout<<"\t2. Record Number\n";
				cout<<"\t3. Quantity\n";
				cout<<"\t4. Cost\n";
				cin>>num;
				cin.ignore();
			switch(num){
				case 1: {
					cout<<"Tool Name: ";
					cin.getline(rec1.toolName, 20);
					break;
				}
				case 2: {
					cout<<"Record Number: ";
					cin>>rec1.recNo;
					break;
				}
				case 3: {
					cout<<"Quantity: ";
					cin>>rec1.quantity;
					break;
				}
				case 4:{
					cout<<"Cost: ";
					cin>>rec1.cost;
					break;
				}
			cout<<rec1.recNo<<"\t\t"<<rec1.toolName<<"\t\t\t"<<rec1.quantity<<"\t\t"<<rec1.cost<<"\n";
			
			
			}
			
			fio.seekg(pos);
			fio.write((char*)&rec1, sizeof(record));
			}
			
		
		}
		cout<<"\nEditing complete\n";
		
		fio.close();	
		}
	

	
	if(num == 5){
		remove("hardware.dat");
		cout<<"\tFile Discarded successfuly......\n";
	}
	
	
	
	cin.ignore();
	cout<<"Do want to continue using z Program?(Y/N): ";
	cin>>tag;
	if(tag == 'y' || tag == 'Y' ) goto one;




	return 0;

}
