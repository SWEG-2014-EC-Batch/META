// resistance values of 16, 27, 39, 56, and 81
// power array holds product of resistance array and current array
#include <iostream>
#include <iomanip>
#include <cmath>

const int SIZE = 5;

void currentInput(double current[]);

void powerCalc(double current[], double power[], double resistance[]);

void resultPrint(double current[], double power[], double resistance[]);

void totalCalc(double current[], double power[], double resistance[]);

int main()
{
    double resistance[SIZE] = {16, 27, 39, 56, 81};
    double current[SIZE] = {0};
    double power[SIZE] = {0};
    currentInput(current);
    powerCalc(current, power, resistance);
    resultPrint(current, power, resistance);
    totalCalc(current, power, resistance);
}

void currentInput(double current[])
{
    for (auto i = 0; i < SIZE; i++)
    {
        std::cout << "\nInput current value number " << i + 1 << ": ";
        std::cin >> current[i];
    }
}

void powerCalc(double current[], double power[], double resistance[])
{
    for (int i = 0; i < SIZE; i++)
    {
        power[i] = pow(current[i], 2) * resistance[i];
    }
}

void resultPrint(double current[], double power[], double resistance[])
{
    std::cout << "\n" << std::setw(40) << "Resistance" << std::setw(20) << "Current" << std::setw(20) << "Power";
    for (int i = 0; i < SIZE; i++)
    {
        if (i == 0) std::cout << "\n";
        std::cout << "\n" << std::setw(40) << resistance[i] << std::setw(20) << current[i] << std::setw(20) << power[i];
    }
}

void totalCalc(double current[], double power[], double resistance[])
{
    double totalCurrent = 0, totalPower = 0, totalResistance = 0;
    for (int i = 0; i < SIZE; i++)
    {
        totalCurrent += current[i];
        totalPower += power[i];
        totalResistance += resistance[i];
    }
    std::cout << "\n\n" << std::setw(20) << "Total" << std::setw(20) << totalResistance << std::setw(20) << totalCurrent << std::setw(20) << totalPower;
}