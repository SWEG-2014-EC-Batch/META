#include <iostream>
#include <cmath>
#include <cassert>

double windchillCalc(double windspeed, double temperature);

int main(){
    double windspeed = 0, temperature = 0;
    std::cout << "\nPlease input wind speed in meters per second: ";
    std::cin >> windspeed;
    std::cout << "\nPlease input temperature in degrees Celsius: ";
    std::cin >> temperature;
    std::cout << "\nThe windchill factor is calculated to be " << windchillCalc(windspeed,temperature) << " degrees Celsius";
}

double windchillCalc(double windspeed, double temperature)
{
    assert(temperature <= 10);
    return (13.12 + 0.6215 * temperature - 11.37 * pow(windspeed, 0.16) + 0.3965 * temperature * pow(windspeed, 0.016));
}