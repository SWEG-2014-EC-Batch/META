#include <iostream>
using namespace std;
int main(){
    int lowerHalfNumber=0, upperHalfNumber=0, num5=1, uSize, uUSize=2, size1=1, num9=8, uUSizeTwo=18, uUSizeOne, sizeTwo=1, num8 = 0;
    for(int size=1; size<=9;size++){                                             // first 9 row (HALF) of the butterfly code  
            uSize=uUSize/2;
            for(int size=1;size<=uSize;size++){
                cout<<upperHalfNumber++<<" ";
            }
            for(int size=17;size>=size1;size--){
                cout<<"  ";
            }
            size1+=2;
            for(int size=1;size<=uSize;size++){
                cout<<--upperHalfNumber<<" ";
            }
            uUSize+=2;cout<<endl;
        }
        
    for (int size=1; size<=18; size++){                                      // middle belt-like code
            if (num8<10){
                cout<<num8++<<" ";
            }
            if(num8>9){
                cout<<num9--<<" ";
            }
        }
        cout<<endl;

    for(int size=1; size<=9;size++){                                         // last 9 row (other HALF) of the butterfly code
        uUSizeOne=uUSizeTwo/2;
        for(int size=1;size<=uUSizeOne;size++){
            cout<<lowerHalfNumber++<<" ";
        }
        for(int size=1;size<=sizeTwo;size++){
            cout<<"  ";
        }
        sizeTwo+=2;
        for(int size=1;size<=uUSizeOne;size++){
            cout<<--lowerHalfNumber<<" ";
        }
        uUSizeTwo-=2;
        cout<<endl;
    }
    return 0;
}