#include <iostream>
#include <cassert>
#include <ctype.h>

void discountCalc(double &price, double discount, bool isDiscountPercentageBased);

int main()
{
    double inputPrice, inputDiscount;
    bool isDiscountByPercent;
    char confirmation;
    std::cout << "\nWelcome to Discount Calculator.";
inputPoint:
    std::cout << "\nDo you wish to apply the discount as a percentage (input p) or as a fixed value (input f)?\n";
    std::cin >> confirmation;

    if (tolower(confirmation) == 'p')
        isDiscountByPercent = true;

    else if (tolower(confirmation == 'f'))
        isDiscountByPercent = false;

    else
    {
        std::cout << "\nUnusual input; please try again.";
        goto inputPoint;
    }

    std::cout << "\nPlease input original price:\n";
    std::cin >> inputPrice;
    std::cout << "\nPlease input discount (as a decimal for percentage discounts, and as a cash amount for fixed values):\n";
    std::cin >> inputDiscount;
    discountCalc(inputPrice, inputDiscount, isDiscountByPercent);
    std::cout << "\nThe discounted price is " << inputPrice;
}

void discountCalc(double &price, double discount, bool isDiscountPercentageBased)
{
    if (isDiscountPercentageBased)
    {
        assert(discount < 1);
        assert(discount > 0);
        price *= (1 - discount);
    }

    else
    {
        assert(discount >= 0);
        assert(discount < price);
        price -= discount;
    }
}