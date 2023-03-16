// printPattern3x.cxx
#include <iostream>
using namespace std;
int main()
{
    int m=0, n=1;
    
    for (int size = 1; size <= 8; size++)
    {
        for (int size =1; size <= m; size++)
        {
            cout << "   "; 
        }m++;
  
        for (int size = 8; size >=n; size--)
        {
            cout << " # ";
        }
        cout << endl;n++;
    }
    return 0;
}












