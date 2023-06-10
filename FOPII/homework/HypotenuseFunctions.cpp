#include <iostream>
#include <cmath>
#include <iomanip>
double hypotenuse(double legOne, double legTwo)
{
    double hypotenuseLength = sqrt(pow(legOne, 2) + pow(legTwo, 2));
    return hypotenuseLength;
}
int main()
{
    double sideOne = 0, sideTwo = 0;
    std::cout << std::setw(60)
              << "Welcome to Hypotenuse Calculator!\n\n";
    std::cout << "Please input the length of one side of the triangle:\n";
    std::cin >> sideOne;
    std::cout << "Please input the length of the other side of the triangle:\n";
    std::cin >> sideTwo;
    std::cout << "The length of the hypotenuse of a right triangle with legs having lengths of "
              << sideOne << " and " << sideTwo << " units is " << hypotenuse(sideOne, sideTwo);
}