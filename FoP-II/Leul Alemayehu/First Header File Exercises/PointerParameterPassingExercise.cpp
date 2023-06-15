#include <iostream>

void calcQuotient(double n1, double n2, double *answer);

int main()
{
    double n1, n2, quotient = 1;
    std::cout << "\nInsert dividend: ";
    std::cin >> n1;
    std::cout << "\nInsert divisor: ";
    std::cin >> n2;
    calcQuotient(n1, n2, &quotient);
    std::cout << "\nQuotient is equal to " << quotient;
}

void calcQuotient(double n1, double n2, double *answer)
{
    *answer = n1 / n2;
}