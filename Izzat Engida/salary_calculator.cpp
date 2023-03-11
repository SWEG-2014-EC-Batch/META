//salary calculator
#include<iostream>
using namespace std;
int main(){
    float gross_salary,worked_hours,pension=0.07,net_salary,overtime_bonus;  
    cout<<"hello and welocome\n to exit enter '-1'\n";
    cout<<"enter your gross salary: "<<endl;
    cin>>gross_salary;
    if(gross_salary==-1){return 1;}//if -1 is enterd it will exit
    cout<<"enter your worked hours: "<<endl;
    cin>>worked_hours;
    hey:
    if(worked_hours>=40){//calculates with the bonus
        cout<<"please enter your work hour bonus: "<<endl;
        cin>>overtime_bonus;
    
        if (gross_salary<=200 && gross_salary>=0)
        {
        net_salary=gross_salary-(pension*gross_salary)+overtime_bonus;
        cout<<"the net salary is: "<<net_salary;
        }else if(gross_salary>200 && gross_salary<=600){
            net_salary=gross_salary-(pension*gross_salary)-(0.1*gross_salary)+overtime_bonus;
            cout<<"the net salary is: "<<net_salary<<endl;
        }else if(gross_salary>600 && gross_salary<=1200){
            net_salary=gross_salary-(pension*gross_salary)-(0.15*gross_salary)+overtime_bonus;
            cout<<"the net salary is: "<<net_salary<<endl;
        }else if(gross_salary>1200 && gross_salary<=2000){
            net_salary=gross_salary-(pension*gross_salary)-(0.2*gross_salary)+overtime_bonus;
            cout<<"the net salary is: "<<net_salary<<endl;
        }else if(gross_salary>2000 && gross_salary<=3500){
            net_salary=gross_salary-(pension*gross_salary)-(0.25*gross_salary)+overtime_bonus;
            cout<<"the net salary is: "<<net_salary<<endl;
        }else{net_salary=gross_salary-(pension*gross_salary)-(0.3*gross_salary)+overtime_bonus;
        cout<<"the net salary is: "<<net_salary<<endl;}
        
    }else{//with out the bonus
         if (gross_salary<=200 && gross_salary>=0)
        {
        net_salary=gross_salary-(pension*gross_salary)+overtime_bonus;
        cout<<"the net salary is: "<<net_salary<<endl;
        }else if(gross_salary>200 && gross_salary<=600){
            net_salary=gross_salary-(pension*gross_salary)-(0.1*gross_salary);
            cout<<"the net salary is: "<<net_salary<<endl;
        }else if(gross_salary>600 && gross_salary<=1200){
            net_salary=gross_salary-(pension*gross_salary)-(0.15*gross_salary);
            cout<<"the net salary is: "<<net_salary<<endl;
        }else if(gross_salary>1200 && gross_salary<=2000){
            net_salary=gross_salary-(pension*gross_salary)-(0.2*gross_salary);
            cout<<"the net salary is: "<<net_salary<<endl;
        }else if(gross_salary>2000 && gross_salary<=3500){
            net_salary=gross_salary-(pension*gross_salary)-(0.25*gross_salary);
            cout<<"the net salary is: "<<net_salary<<endl;
        }else{net_salary=gross_salary-(pension*gross_salary)-(0.3*gross_salary);
        cout<<"the net salary is: "<<net_salary<<endl;}
    }while(gross_salary!=-1){//looping part
 cout<<"press -1 to exit";       
cout<<"enter the next gross salary"<<endl;
    cin>>gross_salary;
    cout<<"enter the next worked hours: "<<endl;
    cin>>worked_hours;
    goto hey;
    }
}