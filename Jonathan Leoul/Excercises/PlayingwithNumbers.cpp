#include <iostream>
#include <math.h>
using namespace std;


int main () {
int Input,a,b,c,d,i,digit=0,m,fact;
cout<<"Welcome to the Playing with Numbers program\n Use the following menu to navigate through the program\n Enter 1 for the reversing numbers program \n";
cout<<" Enter 2 for Number of digits program\n Enter 3 for Sum of digits program \n Enter 4 for product of even digits within a number program \n Enter 5 for first and last digit of a number, including their sum, program";
cout<<"\n Enter 6 for Swapping the first and last digits of a number \n Enter 7 for Palindrom checker \n Enter 8 for Frequecy checker for each digit program \n Enter 9 for Armstrong number checker \n Enter 10 for Strong number checker \n Enter 11 for Perfect number checker: ";
cin>>m;

if (m==1){
//Reverse printer
cout<<"Enter your number to be reversly displayed: ";
cin>>Input;
a=Input;

a=Input;

    while (a>0){
        b=a%10;
        cout<<b;
        a=a/10;
    }}
else if (m==2){
    // Number of digits in a given number
    cout<<"Enter the number you want to find it's number of digits of: ";
cin>>Input;
a=Input;
while (a>0) {
    a=a/10;
    digit++;
}
cout<<"Number of digit is: "<<digit;
}
//Sum of the digits in a number
else if (m==3) {
    cout<<"Enter a number to find the sum of it's digits: ";
    cin>>Input;
a=Input;
c=0;
while(a>0) {
    b=a%10;
    c=c+b;
    a=a/10;
}    cout<<c;
}
//Product of even numbers found within a digit
else if (m==4){
cout<<"Enter a number to find it's product of even numbers found within its digits: ";
cin>>Input;
a=Input;
c=1;
while (a>0){
    b=a%10;
    if (b==0){
        goto kk;}
    if(b%2==0){
        c=b*c;
    }
  kk:  a/=10;
} if (c!=1){
    cout<<c;
}  else {
    cout<<"0";}}

//First and last digits of a number, along with their sum
    if (m==5){
        cout<<"Enter a number,you wish to find it's first and last digits, as well as thier multiples: ";
        cin>>Input;
      a=Input;
      b=a%10;
      c=b;
      while (a>0) {
        b=a%10;
        if(a<=9){
            d=a;
        }
        a/=10;
      }
      cout<<"The first digit is "<<d<<endl<<"The last digit is "<<c<<endl<<"The sum of these two numbers is "<<c+d;
      }

      //Swapper of first and last digits of a number
      if (m==6){
     cout<<"Enter a number,you wish to swap it's first and last digits: ";
        cin>>Input;
      a=Input;
      b=a%10;
      c=b;
      while (a>0) {
        b=a%10;
        if(a<=9){
            d=a;
        }
        a/=10;
      }
     a=Input;
while (a>0) {
    a=a/10;
    digit++;
}
--digit;
 a = d * (pow(10, digit));
    b = Input % a;
    Input = b / 10;
    c = c * (pow(10, digit)) + (Input * 10 + d);
    cout << " The number after swaping the first and last digits are: " << c << endl;
 }
//Palindrom number checker 
 if (m==7){
    cout<<"Enter a number wheather or not it's a palindrom number: ";
    cin>>Input;
     a=Input;
     digit=0;
     while(a>0){
        digit++;
        a/=10;
     } 
     c=0;
     a=Input;
     d=digit-1;
     while(a>0){
        b=a%10;
     if(b==0 && d==0){
            b=a;}
      
        c=c+b*(pow(10,d));
        d--;
        a/=10;
     } cout<<"Reversed form of the number "<<Input<<" is "<<c<<endl;
     if(c==Input){
        cout<<Input<<" is a palindrom number";
     } else {cout<<Input<<" isn't a palindrom number";}
     }

     //Frequecny of digits in a number
     if (m==8){
      cout<<"Enter a digit to find the frequency of each digit: ";
      cin>>Input;
     
     for (i=0;i<=10;i++){
        
        a=Input;
        digit=0;;
        while (a>0){
            b=a%10;
            if(b==i){
                digit++;
                c=b;
            }
            a/=10;
        } if(digit!=0){
            cout<<"The frequency of the digit "<<c<<" in "<<Input<<" is ";
            cout<<digit<<endl;}
     }     }

     //Armstrong number checker
 if (m==9){
cout<<"Enter a number to check if it's an Armstrong number or not: ";
cin>>Input;
a=Input;
while (a>0){
    a/=10;
    digit++;
} 
a=Input;
c=0;
    while (a>0){
        b=a%10;
        c=c+pow(b,digit);
        a/=10;
    }
    if (c==Input){
        cout<<Input<<" is an Armstrong number";
    } else {cout<<Input<<" isn't an Armstrong number";}}

//Strong number checker 
    if(m==10){
        cout<<"Enter a number to check whether or not it's a strong number: ";
        cin>>Input;

a=Input;
while (a>0){
    digit++;
    a/=10;
} a=Input;
c=1;
i=0;
while (a>0){
 b=a%10;
 c=1;
 for(fact=1;fact<=b;fact++){
    c=c*fact;
 }
 i=i+c;
 a/=10;
} 
if (i==Input){
    cout<<Input<<" is a strong number";
} else{cout<<Input<< " isn't a strong number";}
   }
  
 //Perfect number checker
     if (m==11){
    cout<<"Enter a number, to check whether or not it is a perfect one: ";
    cin>>Input;
    c=0;
    for(m=1;m<=(Input/2);m++){
        a=Input%m;
        if(a==0){
            c=c+m;
        }
    } if(c==Input){
        cout<<Input<<" is a perfect number";
    }else{cout<<Input<<" isn't a perfect number";}}
return 0;
} 
    

    
