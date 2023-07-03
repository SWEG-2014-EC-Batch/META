#include <iostream>


using namespace std;


struct cmplxNum{
    float real ;
    float imaginary;
    };
    
    
cmplxNum add (cmplxNum num3, cmplxNum num4);
cmplxNum sub (cmplxNum num3, cmplxNum num4);
cmplxNum mult (cmplxNum num3, cmplxNum num4);
cmplxNum div (cmplxNum num3, cmplxNum num4);
    
int main()
{    begining :
 
     cmplxNum num1, num2 ;
     cmplxNum answer ;
     int choice;
 
     cout<<"The first complex number. \n";
     cout<<"\tEnter the real part: ";
     cin>>num1.real;
     cout<<"\tEnter the imaginary part(without ' i '): ";
     cin>>num1.imaginary;
   
     cout<<"The second complex number. \n";
     cout<<"\tEnter the real part: ";
     cin>>num2.real;
     cout<<"\tEnter the imaginary part(without ' i '): ";
     cin>>num2.imaginary;
     
     cout<<"Which operation do you want:\n ";
     cout<<"\t1. Addition \n\t2. Subtraction \n\t3. Multiplication \n\t4. Division  ==> ";
     cin>>choice;
     
     if (choice == 1 ){ answer = add (num1, num2);
    cout<<"Answer: \n";
    cout<<"( "<< num1.real <<" + "<< num1.imaginary <<"i ) + ( "<< num2.real <<" + "<< num2.imaginary<<"i ) = "<< answer.real<<" + "<< answer.imaginary<<"i\n"; 
    }
    
       else if (choice == 2 ){answer = sub (num1, num2);
    cout<<"Answer: \n";
    cout<<"( "<< num1.real <<" - "<< num1.imaginary <<"i ) - ( "<< num2.real <<" + "<< num2.imaginary<<"i ) = "<< answer.real<<" + "<< answer.imaginary<<"i\n";}
    
          else if (choice == 3 ){answer = mult(num1, num2);
   cout<<"Answer: \n";
    cout<<"( "<< num1.real <<" + "<< num1.imaginary <<"i ) * ( "<< num2.real <<" + "<< num2.imaginary<<"i ) = "<< answer.real<<" + "<< answer.imaginary<<"i\n";}
    
             else if (choice ==4 ){answer = div(num1, num2);
    cout<<"Answer: \n";
    cout<<"( "<< num1.real <<" + "<< num1.imaginary <<"i ) / ( "<< num2.real <<" + "<< num2.imaginary<<"i ) = "<< answer.real<<" + "<< answer.imaginary<<"i\n";}
    
    cout<<"Do you want to continue: 1. Yes\t2.No\n\t";
    cin>> choice;
    
         if (choice == 1){goto begining;}
         else return 0;	
         
         
}

cmplxNum add (cmplxNum num3, cmplxNum num4) {
    cmplxNum ans;
    ans.real = num3.real + num4.real;
    ans.imaginary = num3.imaginary + num4.imaginary;
    return ans;
    }
    
cmplxNum sub (cmplxNum num3, cmplxNum num4){      
    cmplxNum ans;
    ans.real = num3.real - num4.real;
    ans.imaginary = num3.imaginary - num4.imaginary;
    return ans;
    }
    
    
cmplxNum mult (cmplxNum num3, cmplxNum num4){     
    cmplxNum ans;
    ans.real = (num3.real * num4.real) - num3.imaginary * num4.imaginary;
    ans.imaginary = (num3.real * num4.imaginary) + (num3.imaginary * num4.real);
    return ans;   
            }
    
cmplxNum div (cmplxNum num3, cmplxNum num4){     
    cmplxNum ans, ans1, ans2, bar;
    bar = num4;
    bar.imaginary = -num4.imaginary;
    
    ans1 = mult(num3, bar);
    ans2 = mult(num4, bar);
   ans.real = ans1.real / ans2.real;
   ans.imaginary = ans1.imaginary / ans2.real;
    return ans;
    }