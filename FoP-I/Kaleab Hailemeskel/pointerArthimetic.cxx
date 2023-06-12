#include <iostream>

using namespace std;

int main()
{
    float price_Arry[10]={10.62, 14.89, 13.21, 16.55, 18.62, 9.45, 5.58, 18.32, 12.15,3.98},
            quantity_Arry[10]={4, 8.5, 6,7.35,9, 15.3, 3, 5.4, 2.9, 4.8}, amnt_Arry[10];

    float *pr_Arry=price_Arry, 
            *qu_Arry=quantity_Arry, 
            *am_Arry=amnt_Arry;

    for(int i=0; i<10; i++)
        { *(am_Arry+i)= *(qu_Arry+i)* *(pr_Arry+i); cout<<*(am_Arry+i)<<" ";}






    return 0;
}

