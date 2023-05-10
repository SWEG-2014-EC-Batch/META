#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Enter your number: ";
    cin >> i;
    (i % 2) ? cout << "your number is odd" : cout << "your number is even ";

    return 0;
}

/*it wont run. but here below it can be another formula
int main()
{int i;
cout << "Enter your number: ";
    cin >> i;
    if(i%2){cout<<"your number is odd" ;} else{cout<<"your number is even";}

    
    
    
    return 0;
}*/