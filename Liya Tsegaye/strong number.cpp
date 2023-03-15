
#include<iostream>
using namespace std;

int main()
{
	int i, number, j, reminder;
	long sum = 0, factorial = 1;
	
	cout << "Please Enter the Number to Check for Strong Number =  \n";
	cin >> number;
	
	for(j = number; j > 0; j =  j / 10 )
	{
		factorial = 1;  
		reminder = j % 10;
		
		for (i = 1; i <= reminder; i++)
		{
			factorial = factorial * i;
		}
		sum = sum + factorial;
	}	
	
			
	if(number == sum)
	{
		cout << number << " is a Strong Number";
	}
	else
	{
		cout << number << " is Not a Strong Number";
	}

 	return 0;
}
