#include<iostream> 
using namespace std;
void fun();
int main(){
    fun();
    return 0;
}
void fun(){
    string n;
    cout<<"what is  your name: ";
    cin>>n;
    cout<<"Hello, "<<n<<" welcome to modular programming"<<endl;
}
