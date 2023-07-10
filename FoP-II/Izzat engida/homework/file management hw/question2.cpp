#include<iostream>
#include<fstream>
using namespace std;
struct payment{
string name;
double payrate,pay,gross_pay,regular_pay,overtime;
int hours;
};
void input();
void output();
int main(){
    input();
    output();
}
void input(){
    payment info;
    fstream data;
    data.open("izzatd.txt",ios::out|ios::app);
    int num;
    double sum1=0,sum2=0,sum3=0;
    cout<<"enter the number of people: ";
    cin>>num;
    if(data.is_open()){
    for(int i=0;i<num;i++){
        
        cout<<endl;
    cout<<"enter ur name: ";
    cin>>info.name;
    cout<<"enter ur pay rate: ";
    cin>>info.payrate;
    cout<<"enter hours worked: ";
    cin>>info.hours;
    info.regular_pay=info.hours*info.payrate;
    sum1+=info.regular_pay;
    if(info.hours>40){
        info.overtime=1.5*(info.hours-40)*info.payrate;
    }
    else{
        info.overtime=0;
    }
    sum2+=info.overtime;
    info.gross_pay=info.overtime+info.regular_pay;
    sum3+=info.gross_pay;
    data<<info.name<<"   "<<info.regular_pay<<"    "<<info.overtime<<"    "<<info.gross_pay<<endl;
    }
    data<<"total  "<<sum1<<"     "<<sum2<<"      "<<sum3<<"    "<<endl;
    data.close();
    }
}
void output() {
    payment info;
    fstream ou("izzat.txt", ios::in);
    if (ou.is_open()) {
        while (ou >> info.name >> info.regular_pay >> info.overtime >> info.gross_pay) {
            cout << info.name << " " << info.regular_pay << " " << info.overtime << " " << info.gross_pay << endl;
        }
        ou.close();
    } else {
        cout << "Error opening file\n";
    }
}