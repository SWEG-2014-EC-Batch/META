#include <iostream>
#include <cassert>
void scale(double scaleFactor, double &scaledParam1, double &scaledParam2);

int main()
{
    double inputScaleFactor, inputFirstParam, inputSecondParam;
    std::cout << "\nWelcome to the scale factor program. Please input the scale factor that you wish to use: \n";
    std::cin >> inputScaleFactor;
    std::cout << "\nPlease input two values to be scaled: \n";
    std::cin >> inputFirstParam >> inputSecondParam;
    double inputFirstParamCopy = inputFirstParam;
    double inputSecondParamCopy = inputSecondParam;
    scale(inputScaleFactor, inputFirstParam, inputSecondParam);
    std::cout << "\nThe first value, scaled according to the factor provided, is " << inputFirstParam << " (from " << inputFirstParamCopy << ")"
              << ", while the second is " << inputSecondParam << " (from " << inputSecondParamCopy << ")" << std::endl;
}

void scale(double scaleFactor, double &scaledParam1, double &scaledParam2)
{
    assert(scaleFactor != 0);
    scaledParam1 *= scaleFactor;
    scaledParam2 *= scaleFactor;
}