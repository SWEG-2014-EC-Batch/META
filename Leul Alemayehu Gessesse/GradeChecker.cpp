#include <iostream>
using namespace std;
int main(){
    float grade;
    cout << "Input grade: ";
    cin >> grade;
    if(grade>100 || grade<0){
        cerr << "Error: Inputted grade is outside the range 0 to 100 inclusive";
    }
    else if(grade >= 90){
        cout << "Grade is A+";
    }
    else if(grade >= 80){
        cout << "Grade is A";
    }
    else if(grade >= 75){
        cout << "Grade is B+";
    }
    else if(grade >= 60){
        cout << "Grade is B";
    }
    else if(grade >= 55){
        cout << "Grade is C+";
    }
    else if(grade >= 45){
        cout << "Grade is C";
    }
    else if(grade >= 30){
        cout << "Grade is D";
    }
    else if (grade < 30){
        cout << "Grade is F";
    }
    return 0;
}
