#include <iostream>

int fibonacci(int num);

int main()
{
    int num = 20;
    std::cout << fibonacci(num);
}

int fibonacci(int num)
{
    if (num < 3) return 1;
    if (num >= 3) return fibonacci(num - 1) + fibonacci(num - 2);
}