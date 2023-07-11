#include <iostream> 
#include <fstream>

using namespace std;

struct empPay{
    string name;
    float rate,regularPay,overtimePay,grossPay;
    int hours;
};

void process(empPay input[]);

int main () {
empPay Collections[4];
process(Collections);

}
void process(empPay input[]){
    ofstream fout("Collections2.txt",ios::out);
    input[0].name="Callaway, G";input[1].name="Hanson, P";input[2].name="Lasard, D.";input[3].name="Stillman, W";
    input[0].rate=6.00;input[1].rate=5.00;input[2].rate=6.5;input[3].rate=8.00;
    input[0].hours=40;input[1].hours=48;input[2].hours=35;input[3].hours=50;
    fout<<"Name\t"<<"Rate\t"<<"Hours\t"<<"Regular Pay\t"<<"Overtime Pay\t"<<"GrossPay\n";
    for(int i=0;i<=3;i++){
    if(input[i].hours>40){
    input[i].regularPay=input[i].rate*(40);
    input[i].overtimePay=1.5*input[i].rate*(input[i].rate-40);
    input[i].grossPay=input[i].overtimePay+input[i].regularPay;
    } else {
      input[i].regularPay=input[i].rate*input[i].hours;
      input[i].regularPay=0;
      input[i].grossPay=input[i].regularPay;
    }
    
    fout<<input[i].name<<"\t"<<input[i].rate<<"\t"<<input[i].hours<<"\t"<<input[i].regularPay<<"\t"<<input[i].overtimePay<<"\t"<<input[i].grossPay<<"\n";}
    fout.close();
    cout<<"All done";
}