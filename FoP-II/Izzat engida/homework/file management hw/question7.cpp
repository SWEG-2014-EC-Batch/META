#include<iostream>
#include<fstream>
using namespace std;
struct hardware{
    int record,quantity;
    string name;
    float cost;
};
void input(hardware[],int);
void lists(hardware[],int);
void changes(hardware[]);
void update(hardware[],int);
int main(){
    hardware info[100];
int choice;
cout<<"enter 1 fo inputing records\n enter 2 to list all the records\n enter 3 to delete the records\n enter 4 to unpdate a record\n input: ";
cin>>choice;
if(choice==1){
    input(info,100);
}
else if(choice==2){
    lists(info,100);
}
else if(choice==3){
    changes(info);
}
else if(choice==4){
update(info,100);
}
}
void input(hardware info[],int size){
    fstream data;
    int ch=1,i;
    data.open("hardware.dat",ios::out|ios::app);
    while(ch==1){
    if(data.is_open()){
cout<<"enter record number: ";
cin>>i;
info[i].record=i;
cout<<"enter the tool name: ";
cin>>info[i].name;
cout<<" enter the quantity: ";
cin>>info[i].quantity;
cout<<"enter the cost: ";
cin>>info[i].cost;
data<<info[i].record<<"\t"<<info[i].name<<"\t"<<info[i].quantity<<"\t"<<info[i].cost<<"\t"<<endl;
cout<<"do you want to continue press 1: ";
cin>>ch;
    }}data.close();
}
void lists(hardware info[],int size){
    ifstream data("hardware.dat");
    int i=0;
    cout<<"record\t tool name\t quantity\t cost"<<endl;
    while(data>>info[i].record){
 data.ignore();
 getline(data,info[i].name,'\t');
 data>>info[i].quantity;
 data>>info[i].cost;
  cout<<info[i].record<<"\t"<<info[i].name<<"\t\t   "<<info[i].quantity<<"\t\t"<<info[i].cost<<endl;

  i++;     
}
data.close();
}
void changes(hardware info[]){

    int recordNumber;
    cout << "Enter the record number you want to delete: ";
    cin >> recordNumber;
    ifstream dataIn("hardware.dat");
    int i = 0;
    while(dataIn >> info[i].record){
        dataIn.ignore();
        getline(dataIn, info[i].name, '\t');
        dataIn >> info[i].quantity;
        dataIn >> info[i].cost;
        i++;
    }
    dataIn.close();
    for(int j = 0; j < i; j++){
        if(info[j].record == recordNumber){
            for(int k = j; k < i - 1; k++){
                info[k] = info[k + 1];
            }
            i--;
            break;
        }
    }
    ofstream dataOut("hardware.dat");
    for(int j = 0; j < i; j++){
        dataOut << info[j].record << "\t" << info[j].name << "\t" << info[j].quantity << "\t" << info[j].cost << endl;
    }
    dataOut.close();
}
void update(hardware info[],int size){
    int recordNumber;
    cout << "Enter the record number you want to update: ";
    cin >> recordNumber;

    ifstream dataIn("hardware.dat");
    int i = 0;
    while(dataIn >> info[i].record){
        dataIn.ignore();
        getline(dataIn, info[i].name, '\t');
        dataIn >> info[i].quantity;
        dataIn >> info[i].cost;
        i++;
    }
    dataIn.close();
    for(int j = 0; j < i; j++){
        if(info[j].record == recordNumber){
            cout << "Enter the new tool name: ";
            cin.ignore();
            getline(cin, info[j].name);
            cout << "Enter the new quantity: ";
            cin >> info[j].quantity;
            cout << "Enter the new cost: ";
            cin >> info[j].cost;
            break;
        }
    }

    ofstream dataOut("hardware.dat");
    for(int j = 0; j < i; j++){
        dataOut << info[j].record << "\t" << info[j].name << "\t" << info[j].quantity << "\t" << info[j].cost << endl;
    }
}
 

