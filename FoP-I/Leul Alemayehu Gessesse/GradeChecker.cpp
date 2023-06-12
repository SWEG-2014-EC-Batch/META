#include <iostream>
using namespace std;
int main(){
    float totalGrade;
    float testGrade;
    float quizGrade;
    float projectGrade;
    float assignmentGrade;
    float finalExamGrade;
    startpoint:
    cout << "Input test score (out of 15): ";
    cin >> testGrade;
    cout << "Input quiz score (out of 5): ";
    cin >> quizGrade;
    cout << "Input project score (out of 20): ";
    cin >> projectGrade;
    cout << "Input assignment score (out of 10): ";
    cin >> assignmentGrade;
    cout << "Input final exam score (out of 50): ";
    cin >> finalExamGrade;
    if(testGrade < 0 || testGrade > 15){
        cout << "Error: invalid test score entered. Please make sure all entries are in the range 0 - Maximum, and try again" << endl;
        goto startpoint;}
    if(quizGrade < 0 || quizGrade > 5){
        cout << "Error: invalid quiz score entered. Please make sure all entries are in the range 0 - Maximum, and try again" << endl;
        goto startpoint;}
    if(projectGrade < 0 || projectGrade > 20){
        cout << "Error: invalid project grade entered. Please make sure all entries are in the range 0 - Maximum, and try again" << endl;
        goto startpoint;}
    if(assignmentGrade < 0 || assignmentGrade > 10){
        cout << "Error: invalid assignment score entered. Please make sure all entries are in the range 0 - Maximum, and try again" << endl;
        goto startpoint;}
    if(finalExamGrade < 0 || finalExamGrade > 50){
        cout << "Error: invalid final exam score entered. Please make sure all entries are in the range 0 - Maximum, and try again" << endl;
        goto startpoint;}
    totalGrade = testGrade + quizGrade + projectGrade + assignmentGrade + finalExamGrade;
    if(totalGrade>100 || totalGrade<0){
        cerr << "Error: Inputted grade is outside the range 0 to 100 inclusive";
    }
    else if(totalGrade >= 90){
        cout << "Grade is A+";
    }
    else if(totalGrade >= 80){
        cout << "Grade is A";
    }
    else if(totalGrade >= 75){
        cout << "Grade is B+";
    }
    else if(totalGrade >= 60){
        cout << "Grade is B";
    }
    else if(totalGrade >= 55){
        cout << "Grade is C+";
    }
    else if(totalGrade >= 45){
        cout << "Grade is C";
    }
    else if(totalGrade >= 30){
        cout << "Grade is D";
    }
    else if (totalGrade < 30){
        cout << "Grade is F";
    }
    return 0;
}
