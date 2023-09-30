#include<iostream>
#include<algorithm>
#include<ctype.h>
#include<fstream>
#include <vector>
#include<tuple>
using namespace std;
struct Expense {
    string item;
    int cost;
};
vector<Expense> expenses;
void registerExpense(vector<Expense>& expenses, ofstream& outputFile);
void displayExpenses(const string& filename);
float totalExpense(vector<Expense> expenses);
void modifyExpense(vector<Expense>& expenses, const string& filename);
void deleteExpense(vector<Expense>& expenses, const string& filename); 

class Student {
private:
    char a;
    string  ge;
    string te;
    string temp;
    int tem, year, semester;
    int choice, choice2;

     // payment variables
    int inputfee, inputfee2; // For intaking payment fees
    int payselect;
    int holder;
    string pin;
    
public:
 vector<tuple<string,string,int,string,int,int,string>> dat;
  vector<tuple<int,int,string>> courses ={make_tuple(1,100,"1. English 2. Amharic 3. Mathematics 4. History 5. Geography  6. "),
  make_tuple(2,500, "1. Biology  2. Amharic  3. Civics   4. Economics   5. "), make_tuple(3,1000,"Courses"), make_tuple(4,1000,"Courses")};
  vector<tuple<string,int,int>> payrec; // Stores payment records. First int is the ID, Second int is for Current semester on, Third int is for total paid for the year

public:
    void menu();
    void input();
    void print();
    void del();
    void pay();
    void mod();
    void due();
    void sp();
    void checkDue();
    void receipt(string id,string name, int grade, int term,int paidAmount);
    void ExpenseM();
    void stat();
};

const int maxIntake=500;
const int password=1234;
int main(){
    
    Student a;
while(true){
    a.menu();}
}

void Student::menu() {
    cout<<endl<<endl<<endl;
    int k;
    cout << "Welcome to Meta School Billing System. \nTo start, choose from the following options:" << endl;
    cout<<"press 1 for Parent access\npress 2 for the school \npress 3 to exit"<<endl;
    cout<<"choice: ";
    cin>>k;

    if(k==3){
        exit(0);
    }
    else if(k==1){
        cout<<endl;
        cout << "Press 1 for inputing new info" << endl;
        cout<<"Press 2 for payment processes"<<endl;
        cout << "Press 3 to print your child info" << endl;
        cout<<"Press 4 for due payment check of your child"<<endl;
        cout<<"press 5 to exit fullly"<<endl;
        cout<<"choice: ";
        cin>>choice;
        switch(choice) {
        case 1:
            input();
            break;
 
        case 2:
            pay();
            break;
        case 3:
            sp();
            break;
        case 4:
            checkDue();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    }
    else if(k==2){
        int enteredPassword;
        cout << "Enter the password: ";
        cin >> enteredPassword;

        if(enteredPassword != password) { 
            cout << "Invalid password." << endl;
            return;
        }

        cout << "Press 1 to print info" << endl;
        cout<<"press 2 to delete info "<<endl;
        cout<<"press 3  to modify info"<<endl;
        cout<<"Press 4 for due payment check"<<endl;
        cout<<"Press 5 to access and manipulate expense info"<<endl;
        cout<<"press 6 for the stastical informations"<<endl;
        cout<<"press 7 to exit"<<endl;
        cout<<"choice: ";
        cin>>choice;
        switch(choice) {
        case 1:
            print();
            break;
        case 2:
            del();
            break;
        case 3:
            mod();
            break;
        case 4:
            due();
            break;
        case 5:
            ExpenseM();
            break;
           case 6:
        stat();
        break; 
        case 7:
            exit(0);
            break;
        default:
            cout << "Invalid choice." << endl;
    }
    }

    
}
void Student::input() {
    fstream file("student.txt", ios::in);
    fstream file2("student.txt", ios::out | ios::app);
    fstream recsin("paymentrecords.txt",ios::in);
    fstream recsout("paymentrecords.txt",ios::out | ios::app);

    if(file.is_open()){
        while(file >> temp >> te >> tem >> ge >> year >> semester>>pin){
            dat.push_back(make_tuple(temp, te, tem, ge, year, semester,pin));
        }
    } else {cout<<"Failure encountered";}
    file.close();

    if (recsin.is_open()){
        while (recsin>> temp>>semester>>holder){
            payrec.push_back(make_tuple(temp,semester,holder));
        }
    } else {cout<<"Failure encountered during phase 2";}
    recsin.close();

    if(file2.is_open()){
        int numStudents;
        cout << "Enter the number of students you want to input: ";
        cin >> numStudents;

        if((dat.size() + numStudents) > maxIntake){
            cout<<"Sorry, we cannot register that many students, it exceeds our maximum intake capacity. \nTry again next year";
            return;
        }

        for(int j = 0; j < numStudents; j++){
            while(true) {
                cout << "Enter the student id: ";
                cin >> temp;

                bool idExists = false;
                for(int i = 0; i < dat.size(); i++){
                    if(get<0>(dat[i]) == temp){
                        idExists = true;
                        break;
                    }
                }

                if(idExists){
                    cout << "This ID is already in use. Please enter a different ID." << endl;
                } else {
