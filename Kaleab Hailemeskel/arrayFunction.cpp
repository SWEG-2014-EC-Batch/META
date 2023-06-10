#include <iostream>
using namespace std;

void readList(float myList[], unsigned maxNO);
float findMax(const float myList[], unsigned maxNO);
float findMin(const float myList[], unsigned maxNO);
float findRange(const float myList[], unsigned maxNO);    
float findMean(const float myList[], unsigned num);
void display(const float myList[], unsigned maxNO);

int main()  {
    
    float list[50];
    int maxNo;
    
    cout<<"Enter to how many students do you want to assign their mark (<50): ";
    cin>>maxNo;
    
    readList( list, maxNo);
    
    cout<<"\n\tThe maximum mark in the list is: "<<findMax(list, maxNo);
    cout<<"\n\tThe minimum mark in the list is: "<<findMin(list, maxNo);
    
    //cout<<"\n\tRange of the mark is: "<< findRange(MAX, MIN);
    cout<<"\n\tRange of the mark is: "<< findRange(list, maxNo);
    cout<<"\n\tThe mean of their mark is: "<<findMean(list, maxNo);
    display(list, maxNo);
    
            }

void readList(float myList[], unsigned maxNO)
    {   for(int i=0; i<maxNO; i++)  
            {   cout<<"Enter the mark of student "<<i+1<<": ";
                cin>>myList[i];  }
    }
    
float findMax(const float myList[], unsigned maxNO)
    {   float max=0;
        for(int i=0; i<maxNO; i++)  
            { if(max < myList[i]) max = myList[i]; }
      
        return max;
    }
    
float findMin(const float myList[], unsigned maxNO)
    {   float min=myList[0];
        for(int i=0; i<maxNO; i++)  
            { if(min > myList[i]) min = myList[i]; }
        
        return min;
    }
    
float findRange(const float myList[], unsigned maxNO)
    {
       return findMax(myList, maxNO) - findMin(myList, maxNO);
    }

float findMean(const float myList[], unsigned num)
    {
        float sum=0;
        for(int i=0; i<num; i++)
        { sum+=myList[i]; }
        
        return (sum/num);
    }
    
void display(const float myList[], unsigned maxNO)
    {
        cout<<"\n\tMark of the students is: ";
        for(int i=0; i<maxNO; i++)
        { cout<<myList[i]<<" "; }
    }