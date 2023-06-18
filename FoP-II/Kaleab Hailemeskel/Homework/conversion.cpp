
#include <iostream>

using namespace std;

int comand;
float lastValue,lastValue1;
float unit1, unit2;

inline void inpuT();
inline void calculation();
inline void outpuT();


int main()
    {   first:

      	inpuT();
      	calculation();
     	outpuT();
    
        cout<<endl;
        if(comand==1) goto first;
        else return 0;
    }   

void inpuT(){
    
    cout<<"Enter: "<<
     "\n1. To convert values of inches or foot to meter or centimeter; "<<
     "\n2. To convert values of meter or centimeter to inches or feet.\n";
     cin>>comand;
     
     if(comand==1){
            cout<<"Insert your value in inches\t(insert 0 if you don't have any inche unit measurment): ";
            cin>>unit1;
            cout<<"Insert your value in foot\t(insert 0 if you don't have any foot unit measurment): ";
            cin>>unit2;
         
        }
     if(comand==2){
            cout<<"Insert your value in meters\n\t(insert 0 if you don't have any meter unit measurment): ";
            cin>>unit1;
            cout<<"Insert your value in centimeter\n\t(insert 0 if you don't have any centimeter unit measurment): ";
            cin>>unit2;
        } 
     }
     

void calculation(){
    
    
    if(comand==1){ 
        
        lastValue = (unit2 *0.3048) + (unit1* (0.3048/12)); // chainging to meter
        lastValue1 = lastValue* 100;                        // chainging to centimeter
    }
        
    if(comand==2){ 
       
        lastValue = (unit1 *(1/0.3048)) + (unit2* (1/30.48)); // chainging to foot
        lastValue1 = lastValue* 12;                        // chainging to inches
        
    }
        
    }


void outpuT(){
    
    if(comand==1){ 
        cout<<"\v"<<unit2<<" ft and "<<unit1<<" inch "<<"will be equal to: ";
        cout<<"\v/// "<<lastValue<<" meter OR "<<lastValue1<<" centimeter ///";
        
    }
        
    if(comand==2){
        cout<<"\v"<<unit1<<" meter and "<<unit2<<" centimeter "<<"will be equal to: ";
        cout<<"\v/// "<<lastValue<<" ft OR "<<lastValue1<<" inches ///";
    }
    
    cout<<"\nDo you want to continue convering units(1 for YES // 2 for NO): ";
    cin>>comand;
    
   
}

    
