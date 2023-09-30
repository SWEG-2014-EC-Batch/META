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
    break;
                }
            }

            cout << "Enter the student name: ";
            cin >> te;

            cout << "Enter the student age: ";
            cin >> tem;

            cout << "Enter the student gender: ";
            cin >> ge;

            cout<<"Enter the student year: ";
            cin>>year;

            cout<<"Enter the student semester: ";
            cin>>semester;

            cout<<"Enter the student password: ";
            cin>>pin;

            for (int k=0;k<3;k++){
                if(semester == get<0>(courses[k])){
                    cout<<"Fee due for term: "<<semester<<" is "<<get<1>(courses[k])<<endl;
                    cout<<"Complete payment: ";
                    cin>>inputfee;

                    if(inputfee < get<1>(courses[k])){
                        cout<<"You've not committed to the full fee. You need to pay an additional:"<<(get<1>(courses[k])-inputfee);
                        cout<<"\nComplete payment for remaining amount: ";
                        cin>>inputfee2;

                        if(inputfee2 < (get<1>(courses[k])-inputfee)){
                            cout<<"Could not complete registration due to inadequate payment. Any payment made has been refunded";
                            break;
                        }
                        else {
                            goto ab;
                        }
                    } 
                    else {
                        ab:
                        cout<<"Registration of "<<te<<" complete";
                        holder=get<1>(courses[k]);
                        payrec.push_back(make_tuple(temp,semester,holder));

                        if (recsout.is_open()){
                            recsout<<temp<<" "<<semester<<" "<<holder<<endl;
                        } else {
                            cout<<"Failed to export";
                        }

                        file2<<temp<<" "<<te<<" "<<tem<<" "<<ge<<" "<<year<<" "<<semester<<"  "<<pin<<endl; 
                        dat.push_back(make_tuple(temp, te, tem, ge, year, semester,pin));
                    }
                }
            }
       receipt(temp,te, year, semester,holder); }
    }

    recsout.close();
    file2.close();
}
    
void Student::print() {

    dat.clear();  // Clear the vector before reading new data
    fstream file("student.txt", ios::in);
    if(file.is_open()){
        while(file >> temp >> te >> tem >> ge >> year >> semester>>pin){
            dat.push_back(make_tuple(temp, te, tem, ge, year, semester,pin));
        }
    }
    file.close();

    cout<<endl<<endl<<endl;
    cout << "Welcome again" << endl;
    cout << "Press 1 to print all the results " << endl;
    cout << "Press 2 to print a single result " << endl;
    cout <<"Press 3 to print profit results " << endl;
    cout << "Choice: ";
    cin >> choice2;

    if(choice2 == 1){
        sort(dat.begin(), dat.end());
        int t = dat.size();
        cout<<endl<<endl<<endl;
        cout << "ID           name     age      gender      year    semester" << endl;
        for(int i = 0; i < t; i++){
            cout << get<0>(dat[i]) << "  " << get<1>(dat[i]) << "      " << get<2>(dat[i]) << "   " 
                 << get<3>(dat[i]) << "   " << get<4>(dat[i]) << "   " << get<5>(dat[i]) << endl;
        }
    } else if(choice2 == 2){
        string sh;
        cout << "Enter the ID of the student:  ";
        cin >> sh;
        int t = dat.size();
        bool idFound = false;
        cout<<endl<<endl<<endl;
        cout << "ID           name     age      gender      year    semester" << endl;
        for(int i = 0; i < t; i++){
            if(get<0>(dat[i]) == sh){
                idFound = true;
                cout<<get<0>(dat[i])<<"  "<<get<1>(dat[i])<<"      "<<get<2>(dat[i])<<"   "<<get<3>(dat[i])
                    <<"   "<<get<4>(dat[i])<<"   "<<get<5>(dat[i])<<endl; 
            }
        }
        if(!idFound){
            cout << "No student found with the given ID." << endl;
        }
    }else if(choice2 ==3){
          int totalRevenue = 0;
    int profit = 0;
    int totalExpenses = 0;
    vector<tuple<string, string, int>> payrec; 
      expenses.clear();
    // Read expenses from file
    ifstream expensesFile("expenses.txt");
     Expense expense;
     while (expensesFile >> expense.item >> expense.cost) {
            expenses.push_back(expense);
            totalExpenses += expense.cost;
        } 
        expensesFile.close();

        payrec.clear(); // clear before reading
    ifstream paymentRecordsFile("paymentrecords.txt");
        string field1, field2;
        int revenue;
        while (paymentRecordsFile >> field1 >> field2 >> revenue) {
            payrec.push_back(make_tuple(field1, field2, revenue));
        }
        paymentRecordsFile.close();
   
    for (int i = 0; i < payrec.size(); i++) {
        totalRevenue += get<2>(payrec[i]);
    }
    profit = totalRevenue - totalExpenses;
    cout << "Total Revenue: $" << totalRevenue << "\t\t Total Expenses: $" << totalExpenses << endl;

    if (profit >= 0) {
        cout << "Profit = $" << profit;
    } else {
        cout << "The school is at a $" << profit << " loss." << endl;
    }
}
}
void Student::sp(){
    dat.clear();  // Clear the vector before reading new data
    fstream file("student.txt", ios::in);
    if(file.is_open()){
        while(file >> temp >> te >> tem >> ge >> year >> semester>>pin){
            dat.push_back(make_tuple(temp, te, tem, ge, year, semester,pin));
        }
    }
    file.close();

    string sh;
    cout << "Enter the ID of the student:  ";
    cin >> sh;
    cout << "Enter the pin of the student: ";
    cin >> pin;

    bool idFound = false;
    cout<<endl<<endl<<endl;
    cout << "ID           name     age      gender      year    semester" << endl;
    
    for(int i = 0; i < dat.size(); i++){
        if(get<0>(dat[i]) == sh && get<6>(dat[i]) == pin){ // Check if the pin matches
            idFound = true;
            cout<<get<0>(dat[i])<<"  "<<get<1>(dat[i])<<"      "<<get<2>(dat[i])<<"   "<<get<3>(dat[i])
                <<"   "<<get<4>(dat[i])<<"   "<<get<5>(dat[i])<<endl; 
        }
    }
    
    if(!idFound){
        cout << "No student found with the given ID and pin." << endl;
    }
}

void Student::del() {
    cout<<endl<<endl<<endl;
    cout << "Welcome again" << endl;
    cout << "Press 1 to delete all the values" << endl;
    cout << "Press 2 to delete a specific value" << endl;
    cout << "Choice: ";
    cin >> choice2;
    cout<<endl<<endl<<endl;

    if(choice2 == 1){
        fstream file("student.txt", ios::out);
        if(file.is_open()){
            file.clear(); // Clear the contents of the file
        }
        file.close();
        dat.clear();
    } else if(choice2 == 2){
        string sh;
 cout << "Enter the ID of the data you want to remove: ";
        cin >> sh;

        vector<tuple<string,string,int,string,int,int,string>> newDat;

        for(int i = 0; i < dat.size(); i++){
            if(get<0>(dat[i]) != sh){
                newDat.push_back(dat[i]);
            }
        }

        dat = newDat;

        fstream file("student.txt", ios::out);
        if(file.is_open()){
            for(int i = 0; i < dat.size(); i++){
                file << get<0>(dat[i]) << " " << get<1>(dat[i]) << " " << get<2>(dat[i]) << " "
                     << get<3>(dat[i]) << " " << get<4>(dat[i]) << " " << get<5>(dat[i]) << endl;
            }
        }
        file.close();
    } else {
        cout << "Invalid choice. Please enter either 1 or 2." << endl;
    }
}
void Student::mod() {
    cout << "Enter the ID of the student whose info you want to modify: ";
    string id;
    cin >> id;

    // Find the student with the given ID
    for(int i = 0; i < dat.size(); i++){
        if(get<0>(dat[i]) == id){
            // Student found, ask for new info
            cout << "Enter the new student name: ";
            cin >> te;
            cout << "Enter the new student age: ";
            cin >> tem;
            cout << "Enter the new student gender: ";
            cin >> ge;
            cout << "Enter the new student year: ";
            cin >> year;
            cout << "Enter the new student semester: ";
            cin >> semester;

            // Update the student info in dat
            dat[i] = make_tuple(id, te, tem, ge, year, semester,pin);

            // Update the student info in the file
            fstream file("student.txt", ios::out);
            if(file.is_open()){
                for(int j = 0; j < dat.size(); j++){
                    file << get<0>(dat[j]) << " " << get<1>(dat[j]) << " " << get<2>(dat[j]) << " "
                         << get<3>(dat[j]) << " " << get<4>(dat[j]) << " " << get<5>(dat[j]) << endl;
                }
            }
            file.close();

            cout << "Student info updated successfully." << endl;
            return;
        }
    }

    cout << "No student found with the given ID." << endl;
}
void Student :: pay(){
bool check=false;
cout << "Enter the ID of the student whose payment you'd like to complete: ";
    string id;
    cin >> id;
  dat.clear();  // Clear the vector before reading new data
    fstream file("student.txt", ios::in);
    if(file.is_open()){
        while(file >> temp >> te >> tem >> ge >> year >> semester>>pin){
            dat.push_back(make_tuple(temp, te, tem, ge, year, semester,pin));
        }
    }
    file.close();
    payrec.clear();
 fstream recsin("paymentrecords.txt",ios::in);
  if (recsin.is_open()){
            while (recsin>> temp>>semester>>holder){
                payrec.push_back(make_tuple(temp,semester,holder));
            }
         } else {cout<<"Failure encountered during phased 2";}
         recsin.close();
sort(payrec.begin(),payrec.end());
sort(dat.begin(),dat.end());
//Find the student using the ID
for (int i=0; i<dat.size(); i++){
    if(get<0>(dat[i])==id){
        cout<<"ID\t"<<"Name\t"<<"Year\t"<<"Term\t"
        <<endl<<get<0>(dat[i])<<"\t"<<get<1>(dat[i])<<"\t"<<
                    "\t"<<get<4>(dat[i])<<"\t"<<get<1>(payrec[i])<<endl; 

//Check the status of student payment 
    for (int j=0;j<4;j++){
        if(get<4>(dat[i])==get<0>(courses[j])){
            for(int k=0;k<payrec.size();k++){
                if(get<0>(payrec[k])==id){
            temp=get<0>(dat[i]);
            te=get<1>(dat[i]);
            year=get<4>(dat[i]);
// Case 1 of student payment (if student paid unti the 1st term)
            if(get<1>(payrec[k])==1){
                cout<<"Payment for the second and thrid terms is yet to be completed. \n Enter '1' to complete payment for the only the next semester\n Press '2' to complete payment for both semesters ";
                cin>>payselect;

                if(payselect==1){
                    check=false;
                    cout<<"Due fee for the 2nd term is : "<<get<1>(courses[j]);
                    cout<<"\nComplete payment: ";
                    cin>>inputfee;
                
                  if (inputfee==get<1>(courses[j])){
                        cout<<"Payment for the second term complete. Thank You!";
                        get<2>(payrec[i])= get<2>(payrec[i]) + get<1>(courses[j]);
                        get<1>(payrec[i])= 2;
                        semester=get<1>(payrec[i]);
                        holder=get<1>(courses[j]);
                        
                        check=true;
            }

                   else if(inputfee < get<1>(courses[j])){
                    cout<<"You've not commited to the full fee. You need to pay an additional:"<<(get<1>(courses[j])-inputfee);
                    cout<<"\nComplete payment for remaining amount: ";
                    cin>>inputfee2;
                    if(inputfee2 < (get<1>(courses[j])-inputfee)){
                        cout<<"Could not complete registration due to inadequate payment. Any payment made has been refunded";
                        return;
                    
                }  
                else {
                     cout<<"Payment for the second term complete. Thank You!";
                        get<2>(payrec[i])= get<2>(payrec[i]) + get<1>(courses[j]);
                        get<1>(payrec[i])= 2;
                        semester=get<1>(payrec[i]);
                        holder=get<1>(courses[j]);
                         bool check=true;
                }

                } if(check==true){
                receipt(temp,te, year, semester,holder);}
                }
            else if(payselect==2){
                check=false;
                    cout<<"Due fee for the both 2nd and 3rd semester is : "<<(2*get<1>(courses[j]));
                    cout<<"\nComplete payment: ";
                    cin>>inputfee;
                     if (2*get<1>(courses[j])){
                        cout<<"Payment for the third semester complete. Thank You!";
                        get<2>(payrec[i])= get<2>(payrec[i]) + get<1>(courses[j]);
                        get<1>(payrec[i])= 3;
                        holder=2*get<1>(courses[j]);
                        semester=get<1>(payrec[i])= 3;
                         check=true;
            }
                   else if(inputfee < (2*get<1>(courses[j]))){
                    cout<<"You've not commited to the full fee. You need to pay an additional:"<<((2*get<1>(courses[j]))-inputfee);
                    cout<<"\nComplete payment for remaining amount: ";
                    cin>>inputfee2;
                    if(inputfee2 < ((2*get<1>(courses[j]))-inputfee)){
                        cout<<"Could not complete registration due to inadequate payment. Any payment made has been refunded";
                        return;
                    } else {
                        cout<<"Payment for upto third semester complete. Thank You!";
                        get<2>(payrec[i])= get<2>(payrec[i]) + (2*get<1>(courses[j]));
                        get<1>(payrec[i])= 3;
                        semester=get<1>(payrec[i]);
                        holder=get<1>(courses[j]);
                         check=true;

                    }
             
            } if (check==true){receipt(temp,te, year, semester,holder);}}
        }
        // Case 2 of student payment (if student payed until the 2nd term)
         if(get<1>(payrec[i])==2){
                cout<<"Payment for the thrid term is yet to be completed. \nEnter 1 if you'd like to continue: ";
                cin>>payselect;

                if(payselect==1){
                    check=false;
                    cout<<"Due fee for the 3rd term is : "<<get<1>(courses[j]);
                    cout<<"\nComplete payment: ";
                    cin>>inputfee;
               
                    if (inputfee==get<1>(courses[j])) {
                        cout<<"Payment for the Third semester complete. Thank You!";
                        get<2>(payrec[i])= get<2>(payrec[i]) + get<1>(courses[j]);
                        get<1>(payrec[i])= 3;
                         semester=get<1>(payrec[i]);
                        holder=get<1>(courses[j]);
                         check=true;

                    }
                   else if(inputfee < get<1>(courses[j])){
                    cout<<"You've not commited to the full fee. You need to pay an additional:"<<(get<1>(courses[j])-inputfee);
                    cout<<"\nComplete payment for remaining amount: ";
                    cin>>inputfee2;
                    if(inputfee2 < (get<1>(courses[j])-inputfee)){
                        cout<<"Could not complete registration due to inadequate payment. Any payment made has been refunded";
                        return;
                    }  else {
                        cout<<"Payment for the third semester complete. Thank You!";
                        get<2>(payrec[i])= get<2>(payrec[i]) + get<1>(courses[j]);
                        get<1>(payrec[i])= 3;
                         semester=get<1>(payrec[i]);
                        holder=get<1>(courses[j]);
                         check=true;

                    }
              
                     }  receipt(temp,te, year, semester,holder);}
            
        }

        // Case 3 of student payment (If payment for the year was complete)
   if (get<1>(payrec[j])==3){
                cout<<"Payment for all 3 semesters has already been completed. Thank you.";
            } 

    }
}

}}}

//Export payment records data
fstream recsout("paymentrecords.txt", ios::out);
     if(recsout.is_open()){
         for(int i = 0; i < payrec.size(); i++){
             recsout << get<0>(payrec[i]) << " " << get<1>(payrec[i]) << " " << get<2>(payrec[i]) << "\n";
         }
         recsout.close();
     }


}}
void Student::checkDue() {
    string id, pin;

    // Ask for the student's ID and pin
    cout << "Enter the ID of the student: ";
    cin >> id;
    cout << "Enter the pin of the student: ";
    cin >> pin;

    // Find the student with the given ID and pin
    for(int i = 0; i < dat.size(); i++){
        if(get<0>(dat[i]) == id && get<6>(dat[i]) == pin){
            // Student found, check their payment status
            if(get<1>(payrec[i]) < 3){
                // Payment is due
                cout << "Payment is due for term " << get<1>(payrec[i]) + 1 << ". The due fee is: " << get<1>(courses[get<4>(dat[i]) - 1]) << endl;
            } else {
                // No payment due
                cout << "No payment is due." << endl;
            }
            return;
        }
    }

    // No student found with the given ID and pin
    cout << "No student found with the given ID and pin." << endl;
}

void Student :: due(){
    int input;

    // Ipmport data from the the student and payment record files
    dat.clear(); payrec.clear();
fstream file("student.txt", ios::in);
    if(file.is_open()){
        while(file >> temp >> te >> tem >> ge >> year >> semester>>pin){
            dat.push_back(make_tuple(temp, te, tem, ge, year, semester,pin));
        }
    }
    file.close();
    payrec.clear();
 fstream recsin("paymentrecords.txt",ios::in);
  if (recsin.is_open()){
            while (recsin>> temp>>semester>>holder){
                payrec.push_back(make_tuple(temp,semester,holder));
            }
         } else {cout<<"Failure encountered during phased 2";}
         recsin.close();
    

    
    cout<<"Insert \"1\" to check payment due for all the students or \"2\" to check payment due for a single student: ";
     cin>>input;

     //Lists all of the students with remaining payments for terms
     if(input==1){
        sort(dat.begin(), dat.end());
        sort(payrec.begin(),payrec.end());
        int t = dat.size();
        cout<<endl<<endl<<endl;
        cout << "ID           name     age      gender      year    Semester Paid Until Term    Payment due for" << endl;
        for(int i = 0; i < t; i++){
            cout << get<0>(dat[i]) << "  " << get<1>(dat[i]) << "      " << get<2>(dat[i]) << "   " 
                 << get<3>(dat[i]) << "   " << get<4>(dat[i]) << "   " << get<1>(payrec[i])<<"  ";
                 if(get<1>(payrec[i])==1){
                   cout<<"2nd and 3rd Terms"<<endl;
                 }
                else if(get<1>(payrec[i])==2){
                     cout<<"3rd Term"<<endl;
                }
                 else if(get<1>(payrec[i])==3){
                    cout<<"No due fee"<<endl;
                 }
        }
       

     }

     //Fetches info about a specific stuent with remaining payments for 
     else if (input==2){
         string sh;
        cout << "Enter the ID of the student:  ";
        cin >> sh;
        int t = dat.size();
        bool idFound = false;
        cout<<endl<<endl<<endl;
        cout << "ID           name     age      gender      year    Semester Paid Until Term    Payment due for" << endl;
        for(int i = 0; i < t; i++){
            if(get<0>(dat[i]) == sh){
                idFound = true;
                 cout << get<0>(dat[i]) << "  " << get<1>(dat[i]) << "      " << get<2>(dat[i]) << "   " 
                 << get<3>(dat[i]) << "   " << get<4>(dat[i]) << "   " << get<1>(payrec[i])<<"  ";
                 if(get<1>(payrec[i])==1){
                   cout<<"2nd and 3rd Terms"<<endl;
                 }
                else if(get<1>(payrec[i])==2){
                     cout<<"3rd Term"<<endl;
                }
                 else if(get<1>(payrec[i])==3){
                    cout<<"No due fee"<<endl;
                 }
                 break;
            }
        }
        if(!idFound){
            cout << "No student found with the given ID." << endl;
        }
    } else {
        cout << "Invalid choice. Please enter either 1 or 2." << endl;
    }
     

}

void Student :: receipt(string id,string name, int grade, int term,int paidAmount ) {
  // Recievers ID, name, grade , paid for term of the student and amount paid, and prints a receipt 
   cout<<"\n";
   // Prints receipt on the screen
            cout<<"Name of individual: "<<name<<" "<<"\n";
            cout<<"Up to Term: "<<term<<endl;
                cout<<"\tPaid amount: "<<paidAmount<<" BR.\n";
                cout<<"\tWith a recipt string of: "<<id<<"\n";
   // Exports receipt to a file
            fstream rcOut("receipt.txt",ios::out | ios::app );
            rcOut<<"+---------------------------------------------------------------------\n";
            rcOut<<"|\n";
            rcOut<<"Name of individual: "<<name<<" "<<"\n";
            rcOut<<"Up to Term: "<<term<<endl;
            rcOut<<"\tPaid amount: "<<paidAmount<<" BR.\n";
            rcOut<<"\tWith a recipt string of: "<<id<<"\n";
            rcOut<<"+---------------------------------------------------------------------\n\n";

            rcOut.close();

}
void Student::ExpenseM(){
    
    string filename = "expenses.txt";
    ifstream inputFile(filename);
    string line;

    

    int choice;

    while (true) {
        cout << "Expense Menu" << endl;
            cout << "\t1. To register Expense" << endl;
            cout << "\t2. To display Expenses" << endl;
            cout << "\t3. To modify Expense" << endl;
            cout << "\t4. To delete Expense" << endl;
            cout << "\t5. Exit" << endl;
        
        cout << "\nYour choice: ";
        cin >> choice;
        ofstream outputFile(filename, ios::app);
        switch (choice) {
            case 1: 
                registerExpense(expenses, outputFile);
