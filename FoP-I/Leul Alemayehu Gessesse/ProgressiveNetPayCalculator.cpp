//The aim of this program is to calculate net pay following tax and other deductions. It reads one's base salary and
//subtracts income tax and pension contributions, after adding bonus payment from overtime work.
//Also income tax is progressive: <200 → 0%, 200-600 → 10%, 
//600-1200 → 15%, 1200-2000 → 20%, 2000-3500 → 25%, 3500 and above → 30%.
//This program works continuously to calculate net pay for any number of inputs
#include <iostream>
int main(){
    int numberProcessed;
    int iterationNumber = 1;
    std::cout << "For how many people do you want salary processed? ";
    std::cin >> numberProcessed;
    std::cout << std::endl;
    while(iterationNumber <= numberProcessed){
        double baseSalary = 0;
        double grossPayment = 0;
        double workedHours = 0;
        double incomeTaxRate = 0;
        double pensionRate = 0.07;
        double netSalary = 0;
        double hourlyOvertimeRate = 0;
        double overtimePayment = 0;
        char confirmation;
        if(iterationNumber==1 && numberProcessed>1){
            std::cout << "Press S at output to halt calculations." <<std::endl; 
            //This message will only appear when the first employee's income is calculated
        }
        std::cout << "Input employee's base salary: ";
        std::cin >> baseSalary;
        std::cout << "Input employee's hours worked: ";
        std::cin >> workedHours;
        std::cout << "Input hourly overtime bonus rate: ";
        std::cin >> hourlyOvertimeRate;
        overtimePayment = (workedHours > 40) ? ((workedHours - 40) * hourlyOvertimeRate) : (0); //Overtime is the number of hours over the 40 mark worked times the rate
        grossPayment = baseSalary + overtimePayment;
        if(baseSalary < 0 || overtimePayment < 0){
            std::cerr << "Error: Negative income or working hours entered." <<std::endl;
            goto endpoint;
        }
        else if (grossPayment < 200){
            incomeTaxRate=0;
        }
        else if(grossPayment<600){
            incomeTaxRate=0.1;
        }
        else if(grossPayment<1200){
            incomeTaxRate=0.15;
        }
        else if(grossPayment<2000){
            incomeTaxRate=0.2;
        }
        else if(grossPayment<3500){
            incomeTaxRate=0.25;
        }
        else if(grossPayment>=3500){
            incomeTaxRate=0.3;
        }
        netSalary = grossPayment*(1-pensionRate-incomeTaxRate);
        std::cout << "Employee's net salary is " << netSalary <<std::endl <<std::endl;
        if(numberProcessed>1 && iterationNumber < numberProcessed){
            std::cout << "Enter S to halt program, enter any other key to continue" <<std::endl;
        }
        else{
            std::cout << "Enter any key to exit." <<std::endl;
        }
        std::cin >> confirmation;
        std::cout << std::endl;
        if(confirmation == 'S'){
            iterationNumber = (numberProcessed+19); //no specific reason to add 19; any number that gets numberProcessed over the iterationNumber works
        }
        else{
            iterationNumber++;
        }
    }
    endpoint:
    return 0;
}
