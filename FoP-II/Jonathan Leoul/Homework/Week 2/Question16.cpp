#include <iostream>
using namespace std;

void input(bool &Type, int &Hour, int &Minutes, char &Period);
void convertor(bool &Type, int &Hour, int &Minutes, char &Period);
void output(bool &Type, int &Hour, int &Minutes, char &Period);

int main()
{
    bool type;
    int hour, minutes;
    char period;
    char Menu;
    do
    {
        input(type, hour, minutes, period);
        convertor(type, hour, minutes, period);
        output(type, hour, minutes, period);
        cout << endl
             << "Do you wish to continue using this program (y/n)?";
        cin >> Menu;
    } while (Menu == 'Y' || Menu == 'y');

    return 0;
}
void input(bool &Type, int &Hour, int &Minutes, char &Period)
{
    cout << "Enter \"0\" for 24 hour format to 12 hour format conversion \n Or Enter \"1\" for 12 hour to 24 hour conversion: ";
    cin >> Type;
    if (Type)
    {
        cout << endl
             << "Enter the hour and minutes respectively (Hour must not be 0 or exceed 12): ";
        cin >> Hour >> Minutes;
        cout << endl
             << "Enter the time period (\"A\" for A.M and P for \"P\" for P.M )" << endl;
        cin >> Period;
    }
    else
    {
        cout << endl
             << "Enter the hour and minutes respectively (24 hour format): ";
        cin >> Hour >> Minutes;
    }
}
void convertor(bool &Type, int &Hour, int &Minutes, char &Period)
{
    if (Type)
    {
        if (Period == 'A' || Period == 'a')
        {
            if (Hour == 12)
            {
                Hour = 0;
            }
            else
                Hour = Hour;
        }
        else if (Period == 'P' || Period == 'p')
        {
            if (Hour == 12)
            {
                Hour = Hour;
            }
            else
                Hour += 12;
        }
    }
    else
    {
        if (Hour >= 13)
        {
            if (Hour == 13)
            {
                Hour = 12;
            }
            else
            {
                Hour -= 12;
            }
            Period = 'P';
        }
        else if (Hour <= 13)
        {
            if (Hour == 0)
            {
                Hour = 12;
            }
            else
            {
                Hour = Hour;
            }
            Period = 'A';
        }
    }
}
void output(bool &Type, int &Hour, int &Minutes, char &Period)
{
    if (Type)
    {
        cout << "Time in 24 hour format will be " << Hour << ":" << Minutes;
    }
    else
    {
        cout << "Time in 12 hour format will be " << Hour << ":" << Minutes;
        if (Period == 'A')
            cout << " A.M";
        else if (Period == 'P')
            cout << " P.M";
    }
}