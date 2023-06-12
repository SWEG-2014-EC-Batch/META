#include <iostream>
#include <cmath>

using namespace std;
int main() {
    char prompt, gender;
    int choice;
    float height, BMI, weight;
   
    cout<< "BMI MENU"<<endl;
    cout<< "1. For a single person"<<endl;
    cout<< "2. For multiple people"<<endl;
    cout<< "3. For unknown number of people" <<endl;
    cin>> choice;

    if (choice == 1) {
        cout << "Enter your gender(M or F):";
        cin >> gender;
        cout << "Enter your height(in meters):";
        cin >> height;
        cout << "Enter your weight(in kilograms):";
        cin >> weight;
        BMI = weight / pow(height, 2);
        if (gender == 'M') {
            if (BMI < 18.5) {
                cout << "You have a BMI of" << BMI << ". You are an underweight male" << endl;
            } else if (BMI >= 18.5 && BMI <= 25) {
                cout << "You have a BMI of " << BMI << ". You are a normal weight male" << endl;
            } else if (BMI > 25) {
                cout << "You have a BMI of " <<BMI << ". You are an overweight male" << endl;
            }
        } else if (gender == 'F') {
            if (BMI < 18.5) {
                cout << " You have a BMI of "<<BMI << ". You are an underweight female" << endl;
            } else if (BMI >= 18.5 &&  BMI <= 25) {
                cout << "You have a BMI of "<< BMI<< ". You are an average weight female" << endl;
            } else if (BMI > 25) {
                cout << "You have a BMI of "<< BMI<< ". You are an overweight female" << endl;
            }
        }
    } else if (choice == 2) {
        int users;
        int i;
        cout << "Enter the number of users: ";
        cin >> users;
        for (i = 1; i <= users; ++i) {
            cout << "Enter your gender(F or M):";
            cin >> gender;
            cout << "Enter your height(in meters):";
            cin >> height;
            cout << "Enter your weight(in kilograms):";
            cin >> weight;
            BMI = weight / pow(height, 2);
            if (gender == 'M') {
                if (BMI < 18.5) {
                    cout << "You have a BMI of " << BMI << ". You are an underweight male" << endl;
                } else if (BMI >= 18.5 &&  BMI <= 25) {
                    cout << "You have a BMI of " << BMI << ". You are an average weight male" << endl;
                } else if (BMI > 25) {
                    cout << "You have a BMI of "<< BMI<<". You are an overweight male" << endl;
                }
            } else if (gender == 'F') {
                if (BMI < 18.5) {
                    cout << "You have a BMI of " << BMI << "You are an underweight female" << endl;
                } else if (BMI >= 18.5 && BMI <= 25) {
                    cout << "You have a BMI of" << BMI << "You are an average weight female" << endl;
                } else if (BMI > 25) {
                    cout << "You have a BMI of " << BMI << "You are an overweight female" << endl;
                }
            }
        }
    } else if (choice == 3) {
            do  {
                cout << "Enter your gender(F or M):";
                cin >> gender;
                cout << "Enter your height( in meters):";
                cin >> height;
                cout << "Enter your weight (in kilograms):";
                cin >> weight;
                float BMI;
                BMI = weight / pow(height, 2);
                if (gender == 'M') {
                    if (BMI < 18.5) {
                        cout << "You have a BMI of " << BMI << "You are an underweight male" << endl;
                    } else if (BMI >= 18.5 && BMI <= 25) {
                        cout << "You have a BMI of " << BMI << "You are an average weight male" << endl;
                    } else if (BMI > 25) {
                        cout << "You have a BMI of " << BMI << "You are an overweight male" << endl;
                    }
                } else if (gender == 'F') {
                    if (BMI < 18.5) {
                        cout << "You have a BMI of " << BMI << "You are an underweight female" << endl;
                    } else if (BMI >= 18.5 && BMI <= 25) {
                        cout << "You have a BMI of " << BMI << "You are an average weight female" << endl;
                    } else if (BMI > 25) {
                        cout << "You have a BMI of " << BMI << "You are an overweight female" << endl;
                    }
                }
                cout<<"do you want to continue? type O for yes and X for no.\n";
                cin>>prompt;
            }
            while (prompt == 'O');
    }
}