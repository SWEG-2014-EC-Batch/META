

#include <iostream>

using namespace std;                    

int command;
bool perFix_;

double discount(double &price, bool perFix_, double discountp);
bool converter(int com);

int main()
{   
    double price_, discount_;
    
    
    cout<<"\t******* DICOUNT CALCULATOR *******\n";
    cout<<"\vHow much does it cost? ";
    cin>>price_;
    cout<<"Which way do you want to have the discount:\n"<<
    "\t1. By inserting the Percentage OR\n\t2. By inserting the Fixed amount.  =>";
    cin>>command;
    
    if(true==converter(command)){
        cout<<"By how much percent do you want the discount: ";
        cin>>discount_;}
        
    else if(false==converter(command)){
        cout<<"By how much amount do you want the discount: ";
        cin>>discount_;}
        
    discount (price_,  converter(command), discount_)  ;
  
}

bool converter(int com){ 
    
    if(command==1){return true;}
    else if(command==2){return false;}
}


double discount (double &price, bool perFix_, double discountp){
   
    if(perFix_==true){
        
        if(discountp>=100 || discountp<0){cout<<"\v~~~~ sorry we don't offer that much dicount.~~~~"; return 0;}
        else{cout<<"\n/********* The discount you have been requesting is "<<price - price*(discountp/100)<<" BIRR *********/"; }
    }
    
    if(perFix_==false){
        
        if(discountp>=price || discountp<0){cout<<"\v~~~~ sorry we don't offer that much dicount.~~~~"; return 0;}
        else{cout<<"\n/********* The discount you have been requesting is "<<price - discountp<<" BIRR *********/"; }
    }
}