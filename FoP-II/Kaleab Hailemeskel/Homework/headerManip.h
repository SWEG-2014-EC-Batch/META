#include <iostream>
using namespace std;

int length(char *alpha);
void vwlcons(char *alpha);
string reverse(char *alpha);
int cmpr( char *alpha, char *beta );
string makeuppr (char alpha[20], int num );
string makelwr (char alpha[20], int num );


int length (char *alpha){
    int count=0;
    for(   ;*alpha !='\0' ; *(alpha++) ){
            count++;  }
            return count;
    
    }
    
void vwlcons (char *alpha){
        int vwl = 0, cons = 0;
        
        for(   ;*alpha !='\0' ; *(alpha++) ){
            
            
            if(*alpha == 'a' || *alpha == 'A' ||  *alpha == 'e' ||  *alpha == 'E' ||  *alpha == 'i' ||  *alpha == 'I' ||  *alpha == 'o' ||  *alpha == 'O' ||  *alpha == 'u' ||  *alpha == 'U') vwl++;
            
            else  if((*alpha != 'a' || *alpha != 'A' ||  *alpha != 'e' ||  *alpha != 'E' ||  *alpha != 'i' ||  *alpha != 'I' ||  *alpha != 'o' ||  *alpha != 'O' ||  *alpha != 'u' ||  *alpha != 'U') && (((*alpha > 65) &&  (*alpha < 90)) || (*alpha > 97) && (*alpha < 122))) cons++ ; }
     
      cout<<"\tThis string have "<<vwl<<" vowels, and "<<cons<<" consonants. ";
  }
  
string reverse(char *alpha){
        string neword;
        int num = length (alpha), num2=1;
   
        for (int count = 0; count < num; *(alpha++), count++)
        { 
        neword +=  *(alpha + num - count -(num2++) );
        }

        return neword;
    }

int cmpr( char *alpha, char *beta ){ 

    if (length(alpha) == length(beta)){
       
         for ( ; *alpha !='\0', *beta != '\0' ; *(alpha++), *(beta++)) { 
         if (*alpha < *beta) return -1;
         if (*alpha > *beta) return 1;   }
        return 0;  }
    
    else  if (length(alpha) > length(beta)) return 1;
    else  if(length(alpha) < length(beta)) return -1;
    
    }
     
string makeuppr (char alpha[20], int num ){
        
        string neword;
    for (int count=0; count < num; count++)
    {
            if ((alpha[count] >= 97) && (alpha[count] <= 122))
            {  alpha[count] -= 32;  }
               neword += alpha[count];
    }
    
    return neword;
   
    
    }
    
string makelwr (char alpha[20], int num ){
        
        string neword;
    for (int count=0; count < num; count++)
    {
            if ((alpha[count] >= 65) && (alpha[count] <= 90))
            {  alpha[count]  += 32;  }
               neword += alpha[count];
    }
    
    return neword;
   
    
    }