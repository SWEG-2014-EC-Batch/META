#include <iostream>
#include <string>
#include <ctype.h>
#include <iomanip>

using std::cin;
using std::cout;
using std::setw;
using std::string;

struct person
{
    string name;
    char gender;
    int age;
    float weight;
    float height;
    float BMI;
    string weightJudgment = "normal weight";
    string genderLong;
};

int main()
{
    int personTotal = 0;
    person personOne[100];
    cout << "How many people's information do you want processed (99 or fewer): ";
    cin >> personTotal;

    for (int i = 0; i < personTotal; i++)
    {
        std::cout << "\nInput name: ";
        cin.ignore();
        getline(std::cin, personOne[i].name);
        std::cout << "\nInput gender (m/f): ";
        std::cin >> personOne[i].gender;
        personOne[i].gender = toupper(personOne[i].gender);
        std::cout << "\nInput age: ";
        std::cin >> personOne[i].age;
        std::cout << "\nInput weight in kilograms: ";
        std::cin >> personOne[i].weight;
        std::cout << "\nInput height in meters: ";
        std::cin >> personOne[i].height;
        float BMI = personOne[i].weight / (personOne[i].height * personOne[i].height);
        if ((tolower(personOne[i].gender) == 'm' && BMI < 20) || BMI < 18)
            personOne[i].weightJudgment = "underweight";
        else if ((tolower(personOne[i].gender) == 'f' && BMI > 23) || BMI > 25)
            personOne[i].weightJudgment = "overweight";
        personOne[i].genderLong = (personOne[i].gender == 'M') ? ("Male") : ("Female");
    }

    for (int i = 0; i < personTotal; i++)
    {
        if (i == 0)
            cout << "\n"
                 << setw(30) << "Name" << setw(30) << "Age" << setw(30) << "Sex" << setw(30) << "Weight" << setw(30) << "Height" << setw(30) << "BMI and judgment";
        cout << "\n"
             << setw(30) << personOne[i].name << setw(30) << personOne[i].age << setw(30) << personOne[i].genderLong << setw(30) << personOne[i].weight << setw(30) << personOne[i].height << setw(30) << personOne[i].BMI << "(" << personOne[i].weightJudgment << ")";
    }
    cin >> personTotal;
}
