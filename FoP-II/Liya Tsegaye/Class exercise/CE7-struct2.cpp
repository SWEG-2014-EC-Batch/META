#include <iostream>
using namespace std;
struct Person{
  char name[15], gender[10];
  int age;
  double weight, height;
};
int main(){
Person person;
cout << "Enter name: " << endl;
cin>>person.name;
cout << "Enter gender: " << endl;
cin>>person.gender;
cout << "Enter age: " << endl;
cin>>person.age;
cout << "Enter weight(kgs): " << endl;
cin>>person.weight;
cout << "Enter height(m): " << endl;
cin>>person.height;
double BMI = person.weight /(person.height * person.height);
cout << "Your BMI is " << BMI << endl;
if (BMI<18.5){
    cout <<"You are Underweight"<<endl;

} else if (BMI >18.5 || BMI <25){
    cout <<"You are Healthy"<<endl;
} else if (BMI>25){
    cout <<"You are overweight"<<endl;
}


}