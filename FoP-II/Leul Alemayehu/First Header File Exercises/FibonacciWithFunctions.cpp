#include <iostream>

int fibonacci(int ordinaryStop = 1)
{
    int smallerVar = 1;
    int biggerVar = 1;
    int sumVar = 0;
    if (ordinaryStop <= 2)
    {
        return 1;
    }
    for (int i = 3; i <= ordinaryStop; i++)
    {
        sumVar = smallerVar + biggerVar;
        smallerVar = biggerVar;
        biggerVar = sumVar;
    }
    return sumVar;
}

int main()
{
    int confirmation;
    std::cout << "\nDo you want to find the nth fibonacci number? Answer 0 for \"no,\" and any other positive integer for \"yes\"\n";
    std::cin >> confirmation;
    if (confirmation == 0)
        std::cout << fibonacci();
    else
        std::cout << fibonacci(confirmation);
}