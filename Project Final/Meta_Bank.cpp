
 else if(insert=='D'||insert=='d')
            {   ad:
                cout<<"Enter the account number you want to deposit money: ";
                cin>>accnum;
                
                if (accnum>1101||accnum<1001) {
                    if(3<=count){cout<<" % Too many incorrect attempts %"<<endl ;goto one;} count++;
                    cout<<"  Beyond the scope of account number boundary, please RETRY "<<endl; goto ad;}
                    
                size=accnum - 1001;
                sameAccount[size]=accnum;
            if(arryAccount[size]==sameAccount[size])
                    
                    {
                        cout<<"How much do you want to deposit: ";                              
                        cin>>transactionAmount;
                        if(transactionAmount>=0){
                        depositAmount[size] += transactionAmount;
                        arryAmount[size] = arryAmount[size] + transactionAmount;
                        cout<<"\t \\\\ Money deposited successfully. \\\\"<<endl;}
                        
                        else{cout<<"!! Negative amount is not computable. !! \n";}
                    }
                else {
                    if(3<=count){cout<<" % Too many incorrect attempts %"<<endl ;goto one;} count++;
                    cout<<"  Such account number did't exist. please try again.\n"; goto ad;
                     }
            }

    else if (insert=='W'||insert=='w')
            {   bw:
                 cout<<"Enter the account number: ";
                 cin>>accnum;
                if (accnum>1101||accnum<1001)  
                {
                    if(3<=count){cout<<" % Too many incorrect attempts %"<<endl ;goto one;} count++;
                    cout<<"  Beyond the scope of account number boundary, please RETRY "<<endl; goto bw;
                    
                }
                
                size=accnum - 1001;
                if(closedAccount[size] != 0 ) 
                {                // It checkes whether closedAccount have been assined the value of arryAccount, which is different from 0
                    cout<<"This Account is a closed one. You can't withdraw any Money from it.\n\n";
                    cout<<"Do you want to disclose your account? (Y/N): ";
                    cin>>insert;
                    if(insert == 'Y' || insert == 'y' ) 
			{ 
		    		closedAccount[size]=0; 
		   		cout<<"\n\t \\\\ Your account is disclosed. \\\\\n";
			} 
                    		goto one;
                    
                }
                
                 sameAccount[size]=accnum;
                 if(arryAccount[size]==sameAccount[size])
                    {
                        aw:
                        cout<<"Enter the pin number of the account: ";
                        cin>>pinNum;
                        if(arryPinNum[size] == pinNum)
                        {
                            cout<<"How much you want to withdraw: ";
                            cin>>transactionAmount;
                           if(transactionAmount>=0)
                           {
                                
                                if (arryAmount[size] >= transactionAmount) {  
                                    withdrawAmount[size] += transactionAmount;
                                    arryAmount[size] = arryAmount[size] - transactionAmount;
                                    cout<<"\t \\\\ Money withdrawn successfully.\\\\ \n";}
                                    
                                else  {cout<<"  Sorry insufficient amount."<<endl;}
                                    
                           }
                          else{cout<<"!! Negative amount is not computable. !! \n";}

                           
                        }

                        else {
                            if(3<=count){cout<<" % Too many incorrect attempts %"<<endl ;goto one;} count++;
                            cout<<"  You have entered incorrect pin number. please try again "<<endl; goto aw;
                             }
                    }
                     else {
                         if(3<=count){cout<<" % Too many incorrect attempts %"<<endl ;goto one;} count++;
                         cout<<"  Such account number did't exist. please try again.\n"; goto bw;
                          }
            }

    


else if (insert=='C'||insert=='c')
            {   bc:
                cout<<"Enter the account number: ";
                cin>>accnum;
                if (accnum>1101||accnum<1001) {
                if(3<=count){cout<<" % Too many incorrect attempts %"<<endl ;goto one;} count++;
                cout<<"  Beyond the scope of account number boundary,please RETRY "<<endl; goto bc;}
                
                size=accnum-1001;
                sameAccount[size]=accnum;
            if(arryAccount[size]==sameAccount[size])
                {
                    ac:
                    cout<<"Enter the pin number of the account: ";
                    cin>>pinNum;
                    if (arryPinNum[size]==pinNum)
                        {   
                            cout<<"\t \\\\ Account number "<< arryAccount[size]<<" is closed.\\\\ \n";
                            closedAccount[size] = arryAccount[size];             // Here accounts are initialized to closedAccount to diable the withdrawal process 
                        }
                        
                    else {if(3<=count){cout<<" % Too many incorrect attempts %"<<endl ;goto one;} count++;
                         cout<<"  You have entered incorrect pin number. please try again "<<endl; goto ac;}
                }
                else {
                      if(3<=count){cout<<" % Too many incorrect attempts %"<<endl ;goto one;} count++;
                      cout<<"  Invalid account number. please try again.\n"; goto bc;
                     }

            }

    else if (insert=='I'||insert=='i')                                      // Manager use only
            {   ai:
                cout<<"Enter the SPECIAL pin number: ";
                cin>>pinNum;
                if (pinNum==specialPin)
                    {
                        for ( size=0; size<100; size++)
                            {
                                if (arryAccount[size]!=0 && arryAmount[size]>=25)
                                    {   
                                        intialAmount=arryAmount[size];
                                        arryAmount[size]=intialAmount+(intRate*arryAmount[size]);
                                    }
                            }
                            cout<<"\t \\\\ Compound interest amount is added to each account. \\\\ \n";
                    }
                else {
                        if(3<=count){cout<<" % Too many incorrect attempts %"<<endl ;goto one;}
                        cout<<"  You have entered incorrect pin number. please try again "<<endl; count++; goto ai;
                         }
            }

    else if (insert=='P'||insert=='p')                                        // Manager use only
            {   ap:
                cout<<"Enter the SPECIAL pin number: ";                    // It requires special pin that only the manager knows
                cin>>pinNum;
                if (pinNum==specialPin)
                    {   cout<<"__________________________________________________________________________________________________________________________________________\n";
                        cout<<"     Account Numbers \t Deposit \t\t\t\twithdraw \t\t\tBalance \t\t\tPin Number  \n";
                        cout<<"------------------------------------------------------------------------------------------------------------------------------------------\n";
                        for ( size=0; size<100; size++)
                            {
                                if (arryAccount[size]!=0)
                                    {cout<<" \t "<<arryAccount[size]<<"\t\t "<<depositAmount[size]<<" ETB\t\t\t\t"<<withdrawAmount[size]<<" ETB"<<"\t\t\t"<<arryAmount[size]<<" ETB\t\t\t"<<arryPinNum[size]<<"\n";}
                            }        
                        cout<<"__________________________________________________________________________________________________________________________________________\n";
                    }            // Tabular form of opened accounts with their pperspective details
                else {
                        cout<<"  You have entered incorrect pin number. please try again."<<endl;
                        if(3<=count){cout<<" % Too many incorrect attempts %"<<endl ;goto one;} count++; goto ap;
                     }
                     
                for ( size=0; size<100; size++)
                        { 
                            depositAmount[size] = 0; 
                            withdrawAmount[size] = 0;
                        }                                               // reinitializing the array to 0 so that the next print would be 0

            }

    else if (insert=='E'||insert=='e')                                        // Manager use only
        {   ae:
            cout<<"Enter the SPECIAL pin number: ";
                cin>>pinNum;
            if (pinNum==specialPin)
                    {
            cout<<"\n\n\t///////////////////*****************************\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<endl;
            cout<<"\t*******************THANKS FOR USING BANK of META*******************\n";
            cout<<"\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*****************************///////////////////\n";return 0;
                    }
            else {
                    cout<<"  you have entered incorrect pin number. Please try again. "<<endl;
                    if(3<=count){cout<<" % Too many incorrect attempts %"<<endl ;goto one;} count++;goto ae;
                 }
        }


    else {cout<<"\n\t\t\bInvalid transaction."<<endl;}

     goto one;

}


