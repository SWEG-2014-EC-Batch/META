#include <iostream>
#include <cassert>

void timeInput(int &hourPart, int &minutesPart);

void timeProcessing(int &hourPart, int &minutesPart, char &dayHalfAmOrPm);

void timeOutput(int &hourPart, int &minutesPart, char &dayHalfAmOrPm);

int main()
{
    int confirmation = 0;
    do
    {
        int hourPart = 0, minutesPart = 0;
        char dayHalf;
        timeInput(hourPart, minutesPart);
        timeProcessing(hourPart, minutesPart, dayHalf);
        timeOutput(hourPart, minutesPart, dayHalf);
        std::cout << "\nTry again? (1 for yes): ";
        std::cin >> confirmation;
    } while (confirmation == 1);
}

void timeInput(int &hourPart, int &minutesPart)
{
    std::cout << "\nInput hour part of time: ";
    std::cin >> hourPart;
    std::cout << "\nInput minutes part of time: ";
    std::cin >> minutesPart;
}

void timeProcessing(int &hourPart, int &minutesPart, char &dayHalfAmOrPm)
{
    assert(hourPart < 24 && minutesPart < 60);
    if (hourPart < 12)
    {
        dayHalfAmOrPm = 'A';
    }
    if (hourPart >= 12)
    {
        dayHalfAmOrPm = 'P';
        if (hourPart > 12)
            hourPart -= 12;
    }
}

void timeOutput(int &hourPart, int &minutesPart, char &dayHalfAmOrPm)
{
    if (minutesPart >= 10)
        std::cout << "\nThe converted time is " << hourPart << ":" << minutesPart << " " << dayHalfAmOrPm << ".M.";
    if (minutesPart < 10)
        std::cout << "\nThe converted time is " << hourPart << ":0" << minutesPart << " " << dayHalfAmOrPm << ".M.";
}