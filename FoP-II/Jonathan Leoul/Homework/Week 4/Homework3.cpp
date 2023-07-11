#include <iostream>;
using namespace std;

struct Coordinates {
    float X,Y;
};

Coordinates read();
void printer(Coordinates input);

int main () {

Coordinates input;
input= read();
printer(input);


}
Coordinates read(){
    Coordinates input;
    cout<<"Insert your (X,Y) coordinates (respectively): ";
    cin>>input.X>>input.Y;

    return input;
}
void printer(Coordinates input){
    cout<<endl<<"Coordinates: "<<input.X<<","<<input.Y;
}