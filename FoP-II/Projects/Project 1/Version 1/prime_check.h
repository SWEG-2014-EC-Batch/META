#include <cmath>

using namespace std;
bool is_prime(int num)
{
    if(num==1){
        return false;
    }
    int count = 0;
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void composite(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (is_prime(i))
        {
            if (num % i == 0)
            {
                cout << i << " ";
            }
        }
    }
}


void average(int num)
{
    int co = 0;
    int sum = 0;
    for (int i = 2; i <= num; i++)
    {
        if (is_prime(i))
            sum += i;
        co++;
    }
    double value = double(sum) / co;
    cout << value;
}

