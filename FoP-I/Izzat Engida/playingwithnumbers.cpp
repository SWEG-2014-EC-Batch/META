#include<iostream>
#include<cmath>
using namespace std;
int main()
{int num,k,reverse=0,j,mul=1;
cout<<"-----------------------------------------"<<endl;
cout<<"welcome\nchoose form the following options\n";
cout<<"-----------------------------------------"<<endl;
cout<<"1.To find the reverse of a number"<<endl;
cout<<"2.To find the number of digits in a number"<<endl;
cout<<"3.To find the sum of digits in a given number"<<endl;
cout<<"4.TO find the product of even digits in a number"<<endl;
cout<<"5. Print the first and last digit of a number and find its sum"<<endl;
cout<<"6.TO swap the first and last digits of a number"<<endl;
cout<<"7.To check if a number is palindrome"<<endl;
cout<<"8.TO find the frequncy of each digit"<<endl;
cout<<"9.If a number is armstrong or not"<<endl;
cout<<"10. if a number is strong or not"<<endl;
cout<<"11. if a number is perfect or not"<<endl;
cin>>k;
if(k==1){//reverse of a number
  cout<<"Enter the number: ";
  cin>>num;  
  while(num!=0){
 j=num%10;
    reverse=(reverse*10)+j;
    num/=10;
  }cout<<"The reverse of: "<<num<<" is: "<<reverse<<endl;
}if(k==2){//number of digits in a number
    int digits=0;
    cout<<"enter the number: ";
    cin>>num;
    while(num!=0){
        num=num/10;
        digits++;
    }cout<<"the number of digits is: "<<digits;
}if(k==3){//the sum of digits in a number
    int sum=0;
    cout<<"enter the number: ";
    cin>>num;
    while(num!=0){
    j=num%10;
    sum=sum+j;
    num=num/10;
    }cout<<"the sum is: "<<sum;
}if(k==4){//to fing the product of even digits in a number
cout<<"enter a number: ";
cin>>num;
while(num>0){
    j=num%10;
    if(j%2==0){
mul=mul*j;
    }num=num/10;
}cout<<"the product is: "<<mul;
}if(k==5){//print the first and lst digits of a number and their sum
cout<<"enter a number: ";
cin>>num;
int last=num%10;
int num2=num;
while(num2>=10){
    num2=num2/10;
}cout<<"the first digit is: "<<num2<<"\n"<<"the last digit is: "<<last<<endl;
cout<<"the sum is: "<<num2+last;
}if(k==6){//to swap the first and last 
cout<<"enter a number: ";
cin>>num;
int coun=0;
int num3=num;
while(num3>0){
    j=num3%10;
    num3=num3/10;
     coun++;
}
int last=num%10;
int num2=num;
last=last*(pow(10,coun-1));
cout<<last<<endl;
while(num2>=10){
    num2=num2/10;}
     int a= num2 *(pow(10,coun-1));
     int b=num%a;
     num=b/10;
     int inverted=last+(num*10 + num2);
     cout<<"the number after being swapped is: "<<inverted;
}if(k==7){//to check wheter a number is palindrome or not
cout<<"enter a number: ";
cin>>num;
int newnum=num;
  while(newnum!=0){
 j=newnum%10;
    reverse=(reverse*10)+j;
    newnum/=10;}
    if(reverse==num){
    cout<<num<<" is a palindrome number";
  }else{cout<<"it is not a palindrome number";}
}if(k==8){//frequency of digits
cout<<"enter a number: ";//to be finished
cin>>num;
int l=0;
while(l<=9){
    cout<<"frequncy of: "<<l<<"\t";
    int nummin=0;
    int num5=num;
    while(num5>0){
        j=num5%10;
        if(j==l){nummin++;}
        num5=num5/10;
    }cout<<"Digit: "<<nummin<<endl;
    l++;
}

}if(k==9){//if a number is an armstrong number or not
    cout<<"enter a number: ";
cin>>num;
int sum=0;
int newnum=num;
int newnum2=num;
while(newnum>0)
{j=newnum%10;
reverse++;
newnum/=10;
}
while(newnum2>0){
    j=newnum2%10;
    sum+=pow(j,reverse);
    newnum2/=10;
}
if(sum==num){
    cout<<num<<": is an armstrong number";
}else{cout<<num<<": is not an armstrong number";}
}if(k==10){
 cout<<"enter a number: ";//to check if a number is armstrong or not
cin>>num;
int sum=0;
int num;
cout<<num;
while (num>0)
{mul=1;
    j=num%10;
   for(int i=1;i<=j;i++){
    mul=mul*i;}
  sum=mul+sum;
    num=num/10;
    }
if(num==sum){
    cout<<": is a strong  number";
}else{cout<<": is not a strong number";}
}if(k==11){//to find wheter a number is perfect or not
    cout<<"enter a number: ";
    cin>>num;
    int sum=0;
    int i=1;
    while(i<=num/2){
        if(num%i==0){
            sum+=i;
        }i++;
    }if(num==sum){
        cout<<num<<": is a perfect number";
    }else{
        cout<<num<<": is not perfect";
    }

}while(k!=13){
    cout<<"-----------------------------------------"<<endl;
    cout<<"-----------------------------------------"<<endl;
cout<<"welcome\nchoose form the following options\n";
cout<<"-----------------------------------------"<<endl;
cout<<"1.To find the reverse of a number"<<endl;
cout<<"2.To find the number of digits in a number"<<endl;
cout<<"3.To find the sum of digits in a given number"<<endl;
cout<<"4.TO find the product of even digits in a number"<<endl;
cout<<"5. Print the first and last digit of a number and find its sum"<<endl;
cout<<"6.TO swap the first and last digits of a number"<<endl;
cout<<"7.To check if a number is palindrome"<<endl;
cout<<"8.TO find the frequncy of each digit"<<endl;
cout<<"9.If a number is armstrong or not"<<endl;
cout<<"10. if a number is strong or not"<<endl;
cout<<"11. if a number is perfect or not"<<endl;
cin>>k;
}
    return 0;
}