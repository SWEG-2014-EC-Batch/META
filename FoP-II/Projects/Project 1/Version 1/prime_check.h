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
