#include <iostream>
using namespace std;

int main () {
int i,j,k,m,w,l,e;
cout<<"Welcome to the Patters program. Insert the following numbers to get your desired shapes"<<endl;
cout<<" 1 for the rectange consisting of numbers from 10-49 \n 2 for a starred quadrilateral generator using the dimesnions of your choice \n 3 for a starred - 7x4 - rectangle \n 4 for a Hollow 8x8 starred square  \n";
cout<<" 5 for a half pyramid \n 6 for an Inverted Half pyramid \n 7 for a Hollow Inverted Half pyramid \n 8 for Full pyramid \n 9 for Inverted Half pyramid \n 10 for Hollow Full pyramid \n";
cout<<" 11 for a square(5x5) with numbers 1-5 \n 12 for Half pyramid using numbers 1-5 \n 13 for a Reversed Half square pyramid using numbers 1-5 \n 14 a square using the letters a to e (5x5) \n 15 a rectangle (6x4) using letters A to X \n 16 a Half pyramid using letterse A to E: ";
cin>>m;

if(m==1){
    k=10;
  for(i=1;i<=4;i++){
    for(j=1;j<=10;j++){
cout<<k<<" ";
k++;
    }
    cout<<endl;
  }     }

if(m==2){
    cout<<"Enter your lenght (size to the right) and width (size of the patter downward),respectively:  ";
    cin>>l>>w;
    cout<<"Enter your starting number: ";
    cin>>k;
     for(i=1;i<=w;i++){
  for(j=1;j<=l;j++){
cout<<k<<" ";
k++;
    }
    cout<<endl;}   
}

if(m==3){
cout<<"The 7 (length) by 4 star rectangle: "<<endl;
for(i=1;i<=4;i++){
    for (j=1;j<=7;j++){
cout<<"*"<<" ";
    } cout<<endl;
}
}

if(m==4){
    cout<<"The 8(length) by 7(width) star rectangle, with empty centre: "<<endl;
    for(i=1;i<=7;i++){
    if(i==1 || i==7){
        for(e=1;e<=8;e++)
        cout<<"*"<< " ";}

        
if(i>=2 && i<=6){
    cout<<"*"<<" ";
    for(k=2;k<=7;k++){
        cout<<" "<<" ";
    }  cout<<"*";}   
     cout<<endl;
   }
}

if (m==5){
    for (i=1;i<=6;i++){
        for (j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        }
    }

    if (m==6){
       for (i=6;i>=1;i--){
        for (j=1;j<=i;j++){
            cout<<"*"<<" ";
        }   
         cout<<endl;   }
        }
if (m==7){
    for(i=6;i>=1;i--){
        if(i==6){
            for (j=1;j<=6;j++){
                cout<<"* ";
            } 
        }  if(i>=1 && i<=5){
            cout<<"* ";
            for(j=1;j<=(i-2);j++){
                cout<<"  ";
            } if(i>=2 &&i<=5){cout<<"*";}
        }
        
            cout<<endl;
    }
}
if (m==8){
 for(i=1;i<=6;i++){
    k=0;
     for(j=1;j<=6-i;j++){
        cout<<" ";
     }  while(k!=(i)){
        cout<<"* ";
        k++;
     } cout<<endl;
 }  

}
if (m==9){
    for(i=6;i>=1;i--){
        k=0;
        for(j=1;j<=6-i;j++){
            cout<<" ";
        }while(k!=i){
            cout<<"* ";
            k++;
        } cout<<endl;
    }
}
if (m==10){
   for(i = 1; i<=6; i++) {
      for(j = 1; j<=(6-i); j++) {
         cout << " ";
      }
      if(i == 1 || i == 6) { 
         for(j = 1; j<=i; j++) {
            cout << "* ";
         }
      }else{
         cout << "*"; 
         for(j = 1; j<=2*i-3; j++) { 
            cout << " ";
         }
         cout << "*";
      }
      cout << endl;
   }
}
if(m==11){
   
    for (i=1;i<=5;i++){
        for (j=1;j<=5;j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}
if (m==12){
    for(i=1;i<=5;i++){
        for (j=1;j<=i;j++){
            cout<<j<<" ";
        } cout<<endl;
    }
}
if(m==13){
    
    for(i=5;i>=1;i--){
        j=1;
        while (j!=i){
            cout<<"  ";
            j++;
        } 
        if(j==i){
            for(j=i;j<=5;j++){
            cout<<j<<" ";
                }    }
                cout<<endl;} }
if(m==14){
    char a;
    int l;
    for(i=1;i<=5;i++){
        l=97;
        for(j=1;j<=5;j++){
            a=l;
            cout<<a<<" ";
            l++;
        }
        cout<<endl;
    }
}
if(m==15){
    char a;
    int l=65;
    for(i=1;i<=4;i++){
        for(j=1;j<=6;j++){
            a=l;
            cout<<a<<" ";
            l++;
        }
        cout<<endl;
    }
}
if(m==16){
    char a;
    int l=65;
    for(i=1;i<=5;i++){
        l=65;
        for(j=1;j<=i;j++){
            a=l;
            cout<<a<<" ";
            l++;
        }
        cout<<endl;
    }
}
       } 
    

    




