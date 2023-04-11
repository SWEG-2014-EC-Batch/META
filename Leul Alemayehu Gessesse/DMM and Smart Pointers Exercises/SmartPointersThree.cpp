#include <iostream>
#include <memory>
using namespace std;
int main(){
    weak_ptr<int> wp;
    if(1){
        shared_ptr<int> sp = make_shared<int>(53);
        wp = sp;

        auto p = wp.lock();
        if(p) {cout << "Pointer is alive" << endl;}
        else {cout << "Pointing to Null" <<endl;}
    }
}