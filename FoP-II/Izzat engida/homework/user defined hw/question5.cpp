#include<iostream>
using namespace std;
struct Complex {
    double real;
    double imag;
};
Complex add(Complex,Complex);
Complex sub(Complex,Complex);
Complex mul(Complex,Complex);
Complex div(Complex,Complex);

ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}

int main(){
    Complex x,y;
    cout<<" enter the real part of the number: ";
    cin>>x.real>>y.real;
    cout<<"ente the imaginary part of the number: ";
    cin>>x.imag>>y.imag;
    int choice;
    cout<<"choose form the following operations"<<endl;
    cout<<"1.sum\n2.sub\n3.mul\n4.div\n: ";
    cin>>choice;
    if(choice==1){
        cout<<"the sum is: "<<add(x,y);
    }
    else if(choice==2){
        cout<<"the sub is: "<<sub(x,y);
    }
    else if(choice==3){
        cout<<"the mul is: "<<mul(x,y);
    }
    else if(choice==4){
        cout<<"the div is: "<<div(x,y);
    }

}
Complex add(Complex x, Complex y) {
    Complex result;
    result.real = x.real + y.real;
    result.imag = x.imag + y.imag;
    return result;
}

Complex sub(Complex x, Complex y) {
    Complex result;
    result.real = x.real - y.real;
    result.imag = x.imag - y.imag;
    return result;
}

Complex mul(Complex x, Complex y) {
    Complex result;
    result.real = x.real * y.real - x.imag * y.imag;
    result.imag = x.real * y.imag + x.imag * y.real;
    return result;
}

Complex div(Complex x, Complex y) {
    Complex result;
    double denominator = y.real * y.real + y.imag * y.imag;
    result.real = (x.real * y.real + x.imag * y.imag) / denominator;
    result.imag = (x.imag * y.real - x.real * y.imag) / denominator;
    return result;
}
