#include <iostream>
using namespace std;

struct Complex {
    double real, imag;
};

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex multiply(Complex a, Complex b) {
    Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

Complex divide(Complex a, Complex b) {
    Complex result;
    double denominator = (b.real * b.real) + (b.imag * b.imag);
    result.real = ((a.real * b.real) + (a.imag * b.imag)) / denominator;
    result.imag = ((a.imag * b.real) - (a.real * b.imag)) / denominator;
    return result;
}

int main() {
    Complex a, b, c;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> a.real >> a.imag;

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> b.real >> b.imag;

    c = add(a, b);
    cout << "Sum: " << c.real << " + " << c.imag << "i" << endl;

    c = subtract(a, b);
    cout << "Difference: " << c.real << " + " << c.imag << "i" << endl;

    c = multiply(a, b);
    cout << "Product: " << c.real << " + " << c.imag << "i" << endl;

    c = divide(a, b);
    cout << "Quotient: " << c.real << " + " << c.imag << "i" << endl;

    return 0;
}
