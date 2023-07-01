#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

struct complexNumber
{
    double real;
    double im;
};

complexNumber complexAdd(complexNumber, complexNumber);

complexNumber complexSub(complexNumber, complexNumber);

complexNumber complexMult(complexNumber, complexNumber);

complexNumber complexDiv(complexNumber, complexNumber);

int main()
{
    complexNumber uno = {0, 0};
    complexNumber duo = {0, 0};
    cout << "\n\nWelcome to the Complex Number Calculator!";
    cout << "\n\nPlease input the real part, then the imaginary part, of the first number (SERVES AS DIVIDEDND AND MINUEND): ";
    cin >> uno.real >> uno.im;
    cout << "\nPlease input the real part, then the imaginary part, of the second number (SERVES AS DIVISOR AND SUBTRAHEND): ";
    cin >> duo.real >> duo.im;
    cout << std::endl;
    cout << "\nSUM: "
         << "(" << complexAdd(uno, duo).real << ") + (" << complexAdd(uno, duo).im << "i)" << std::endl;
    cout << "DIFFERENCE: "
         << "(" << complexSub(uno, duo).real << ") + (" << complexSub(uno, duo).im << "i)" << std::endl;
    cout << "PRODUCT: "
         << "(" << complexMult(uno, duo).real << ") + (" << complexMult(uno, duo).im << "i)" << std::endl;
    cout << "QUOTIENT: "
         << "(" << complexDiv(uno, duo).real << ") + (" << complexDiv(uno, duo).im << "i)" << std::endl;
}

complexNumber complexAdd(complexNumber firstNum, complexNumber secondNum)
{
    complexNumber complexSum;
    complexSum.real = firstNum.real + secondNum.real;
    complexSum.im = firstNum.im + secondNum.im;
    return complexSum;
}

complexNumber complexSub(complexNumber firstNum, complexNumber secondNum)
{
    complexNumber complexDiff;
    complexDiff.real = firstNum.real - secondNum.real;
    complexDiff.im = firstNum.im - secondNum.im;
    return complexDiff;
}

complexNumber complexMult(complexNumber firstNum, complexNumber secondNum)
{
    complexNumber complexProd;
    complexProd.real = firstNum.real * secondNum.real;
    complexProd.im = firstNum.im * secondNum.im;
    return complexProd;
}

complexNumber complexDiv(complexNumber firstNum, complexNumber secondNum)
{
    complexNumber complexQuot;
    complexQuot.real = (firstNum.real * secondNum.real + firstNum.im * secondNum.im) / (pow(secondNum.real, 2) + pow(secondNum.im, 2));
    complexQuot.im = (firstNum.im * secondNum.real - firstNum.real * secondNum.im) / (pow(secondNum.real, 2) + pow(secondNum.im, 2));
    return complexQuot;
}