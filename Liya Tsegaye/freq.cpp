#include <iostream>
using namespace std;
int main()
{
    int n, i, j, fre, r;
    cout << " Input any number: ";
    cin >> n;
    for (i = 0; i < 10; i++) 
    {
        cout << "The frequency of " << i << " = ";
        fre = 0;
        for (j = n; j > 0; j = j / 10) 
        {
            r = j % 10;
            if (r == i) 
            {
                fre++;
            }
        }
        cout << fre << endl;
    }
    return 0;
}