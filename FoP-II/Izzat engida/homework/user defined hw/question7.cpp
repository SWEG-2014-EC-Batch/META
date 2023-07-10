#include <iostream>
using namespace std;

struct Student{
    char name[20], sex;
    int age;
};

void InputData(Student &s){
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter sex: ";
    cin >> s.sex;
    cout << "Enter age: ";
    cin >> s.age;
}

void DisplayData(Student s){
    cout << "Name: " << s.name << endl;
    cout << "Sex: " << s.sex << endl;
    cout << "Age: " << s.age << endl;
}

int main(){
    Student s;
    InputData(s);
    DisplayData(s);
    return 0;
}
