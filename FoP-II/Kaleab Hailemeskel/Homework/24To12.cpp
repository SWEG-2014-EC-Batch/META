#include <iostream>



using namespace std;

inline void inpuT();
inline void conversion(char &note);
inline void outpuT(char &note);

int hr, miin, command;

int main()
{   char note_;
    first:
    
    inpuT();
    conversion( note_);
    outpuT( note_);
    
    cout<<endl;
    if(command==1) goto first;
    else return 0;
}

void inpuT(){
    
    cout<<"Enter the hour: ";
    cin>>hr;
    if(hr>24 || hr<0){cout<<"BEYOND 24 HOUR FORMAT."; exit(0); }
    cout<<"Enter the minute: ";
    cin>>miin;
    if(miin>60 || miin<0){cout<<"BEYOND 60 MINUTE FORMAT."; exit(0); }
}

void conversion(char &note){
    
    if(hr==24){hr=hr-12; note='A';}
    else if(hr<12){note='A';}
    else if(hr>12){hr=hr-12; note='P';}
    else if(hr==12){note='P';}
   
}

 void outpuT(char &note){
    if (miin<10) cout<< "////  "<<hr<<":"<<"0"<<miin<<" "<<note<<"M"<<endl; 
    else         cout<<"////  "<<hr<<":"<<miin<<" "<<note<<"M"<<endl; 
    
    cout<<"Do you want to continue using this program: ";
    cin>>command;
    
 }
