#include <iostream>
#include <cmath>

void unitInput(int &conversionType, double &bigUnit, double &smallUnit);

void conversionCalc(int &conversionType, double &bigUnit, double &smallUnit);

void conversionPrint(int &conversionType, double &bigUnit, double &smallUnit);

int main()
{
    int confirmation = 0;
    do
    {
        int conversionType = 0;
        double smallUnit = 0, bigUnit = 0;
        std::cout << "\nWould you like to convert feet and inches into meters and centimeters (1) or vice versa (2): ";
        std::cin >> conversionType;
        unitInput(conversionType, bigUnit, smallUnit);
        conversionCalc(conversionType, bigUnit, smallUnit);
        conversionPrint(conversionType, bigUnit, smallUnit);
        std::cout << "\n\nWould you like to do another conversion? Input 1 for \"yes,\" and any other key for \"no\" and exiting the program: ";
        std::cin >> confirmation;
    } while (confirmation == 1);
}

void unitInput(int &conversionType, double &bigUnit, double &smallUnit)
{
    if (conversionType == 1)
    {
        std::cout << "\nInput feet part of length: ";
        std::cin >> bigUnit;
        std::cout << "\nInput inches part of length: ";
        std::cin >> smallUnit;
    }
    if (conversionType == 2)
    {
        std::cout << "\nInput length in meters: ";
        std::cin >> bigUnit;
        std::cout << "\nInput centimeters part of length: ";
        std::cin >> smallUnit;
    }
}

void conversionCalc(int &conversionType, double &bigUnit, double &smallUnit)
{
    if (conversionType == 1)
    {
        bigUnit *= 0.3048;
        smallUnit *= 2.54;
        smallUnit += 100 * (bigUnit - floor(bigUnit));
        bigUnit = floor(bigUnit);
        if (smallUnit >= 100)
        {
            while (smallUnit >= 100)
            {
                bigUnit++;
                smallUnit = smallUnit - 100;
            }
        }
    }
    if (conversionType == 2)
    {
        bigUnit *= 1 / 0.3048;
        smallUnit *= 1 / 2.54;
        smallUnit += 12 * (bigUnit - floor(bigUnit));
        bigUnit = floor(bigUnit);
        if (smallUnit >= 12)
        {
            while (smallUnit >= 12)
            {
                bigUnit++;
                smallUnit = smallUnit - 12;
            }
        }
    }
}

void conversionPrint(int &conversionType, double &bigUnit, double &smallUnit)
{
    if (conversionType == 1)
    {
        std::cout << "\nThe length converted into metric units is " << bigUnit << " meter(s) and " << smallUnit << " centimeter(s).";
    }
    if (conversionType == 2)
    {
        std::cout << "\nThe length converted into imperial units is " << bigUnit << " foot/feet and " << smallUnit << " inch(es).";
    }
}