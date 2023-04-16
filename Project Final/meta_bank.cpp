#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{   const float intRate=0.15;
    const int specialPin=1234;

    float arryAmount[100], depositAmount[100], withdrawAmount[100], 
        transactionAmount, intialAmount;

    int arryAccount[100],sameAccount[100], closedAccount[100], arryPinNum[100],
        accnum=0, pinNum, size;

    char insert;


     for( size=0; size<100; size++)
    {
      arryAccount[size]=0;                              // account, amount, deposit, credit  and pin  generator
      arryPinNum[size]=0;                              
      arryAmount[size]=0;
      sameAccount[size]=0;
      depositAmount[size] = 0; 
      withdrawAmount[size] = 0;
    }

    cout<<fixed<<setprecision(2);

    cout<<"\n\n\t*******WELCOME TO BANK OF META*******\n\n";

    cout<<"Which transaction type do you want to operate?\n\n";
    cout<<"\t1. To open an account enter \"O\" \n"
        <<"\t2. To know your remaining balance enter  \"B\" \n"
        <<"\t3. To deposit money into an account enter\"D\" \n"
        <<"\t4. To withdraw money from an account enter \"W\" \n"
        <<"\t5. To close your account enter\"C\" \n"
        <<"\t6. To compute your interest enter \"I\" \n"
        <<"\t7. To print all account and their perspective amount enter\"P\" \n"
        <<"\t8. To close all the account and exit the system enter \"E\" \n";                              

   one:



    int count=0; //counts number of error of each transaction made by the customer
    cout<<"\n \t Transaction: ";
    cin>>insert;



//This makes the customer to open an account and deposit an initial money
    if(insert=='O'||insert=='o')
        {   
        ao:
            cout<<"which account number do you want? RANGE (1001--1101 only): ";
            cin>>accnum;

            if (accnum>1101||accnum<1001)  // to restrict all accounts between 1001 & 1101
            {
                cout<<"  Beyond the scope of account number boundary,please RETRY "<<endl; goto ao;}

            size=accnum - 1001; // subtructing each account number by 1001 make the size amount start from 0 to 99
            sameAccount[size]=accnum; // sameAccount uses to hold of newly opened accounts besides arryAccount

             if(arryAccount[size]!=sameAccount[size])
                {
                    co:
            cout<<"Deposit an initial money for your account: ";
                    cin>>transactionAmount;

                    if(transactionAmount < 25)
                    {
                    cout<<" Initial amount must be at least  greater than 25 ETB \n";  goto co;
                    }
            arryAmount[size] = transactionAmount;
                    arryAccount[size]=accnum;
                    cout<<"Enter your new pin: ";
                    cin>>pinNum;   

                    arryPinNum[size]=pinNum;
                    cout<<"\t \\\\ Account number "<<arryAccount[size]<<" have opened successfully.\\\\ \n";

                }
                else {cout <<"  This Account number exist previously, please enter another one. \n";} 
        }
//This block is used to find the balance in a specific account 
    else if(insert=='B'||insert=='b')
            {   bb:
                cout<<"Enter the account number: ";
                cin>>accnum;
                if (accnum>1101||accnum<1001) 
                {
                if(3<=count){
                cout<<" % Too many incorrect attempts %"<<endl ;goto one;} count++;
                cout<<"  Beyond the scope of account number boundary, please RETRY "<<endl; goto bb;
                }

                size=accnum - 1001;
                sameAccount[size]=accnum;
            if(arryAccount[size]==sameAccount[size])
                    { // checkes if entered account number have been opened 
                        ab:
                        cout<<"Enter the pin number of the account: ";
                        cin>>pinNum;
