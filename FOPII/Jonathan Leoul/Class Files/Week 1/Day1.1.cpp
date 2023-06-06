#include <iostream>
using namespace std;

void A(){};
 void B(){};
void C(){};

    int main () {
     C();
     B();
     A();
     return 0;
    }
    void A(){
    B();
};
 void B(){
    C();
 };
void C(){
    A();
    };