#include <iostream>
#include <cmath>
using namespace std;

int main(){
int choice;
cout << "MENU for playing with numbers: \n";
cout << "Input :\n";
cout << " 1. for printing reverse numbers\n";
cout << "2. for counting the number of digits in a given number\n";
cout << "3. to find the sum of digits in a number \n";
cout << "4. to print the first and last number\n";
cout << "5. to check if it is a palindrome \n";
cout << "6. find frequency of each digit \n";
cout << "7. to check if it is armstrong number\n";
cout << "8. to check if it is a strong number\n";
cout << "9. to check if it is a perfect number \n";

cin >> choice;
if ( choice == 1){
int n, reversed = 0, remainder;

  cout << "Enter an integer: ";
  cin >> n;

  while(n != 0) {
    remainder = n % 10;
    reversed = reversed * 10 + remainder;
    n /= 10;
  }

  cout << "Reversed Number = " << reversed;
}
else if (choice == 2){

int num, tot=0;
   cout<<"Enter the Number: ";
   cin>>num;
   while(num>0)
   {
      tot++;
      num = num/10;
   }
   cout<<"\n Number of digits = "<<tot;
   cout<<endl;

} else if (choice ==3){

  int n,sum=0,m;    
cout<<"Enter a number: ";    
cin>>n;    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
cout<<"The sum is= "<<sum<<endl; 

} else if (choice ==4){

 int n;
    cout <<"Enter your number: ";
    cin>> n;
      string s = to_string(n);
      int first_digit = s.front() - '0';
      int last_digit = s.back() - '0';
      cout<<"First digit is "<<first_digit<<endl;
      cout<<"Last digit is "<<last_digit<<endl;
}

 else if (choice ==5){
 int n, num, digit, rev = 0;

     cout << "Enter a number: ";
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

}else if (choice == 6){

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

}else if (choice ==7){
  int num, originalNum, remainder, n = 0, result = 0, power;
   cout << "Enter an integer: ";
   cin >> num;

   originalNum = num;

   while (originalNum != 0) {
      originalNum /= 10;
      ++n;
   }
   originalNum = num;

   while (originalNum != 0) {
      remainder = originalNum % 10;

     
      power = round(pow(remainder, n));
      result += power;
      originalNum /= 10;
   }

   if (result == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";

}else if (choice ==8){
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


} else if (choice ==9){
int n,i=1,sum=0;
    cout << "Enter a number: ";
    cin >> n;
       while(i<n){
       if(n%i==0)
       sum=sum+i;
       i++; 
}
 
if(sum==n)
    cout << i << " is a perfect number\n"; 
else
    cout << i << " is not a perfect number\n";
   
} else 
cout <<"Invalid entry.";

    return 0;
}