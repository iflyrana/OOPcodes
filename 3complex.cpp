#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator - (const Complex& c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator * (const Complex& c) {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }

    Complex operator / (const Complex& c) {
        double den = c.real * c.real + c.imag * c.imag;
        return Complex((real * c.real + imag * c.imag) / den, (imag * c.real - real * c.imag) / den);
    }

    Complex conjugate() {
        return Complex(real, -imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    int a,b;

    cout<<"Complex number 1:\nEnter Real Part:";
    cin>>a;
    cout<<"\nEnter Complex Part: ";
    cin>>b;
    Complex c1(a, b);
    cout<<"Complex number 2:\nEnter Real Part:";
    cin>>a;
    cout<<"\nEnter Complex Part: ";
    cin>>b;
    Complex c2(a, b);
    

    Complex sum = c1 + c2;
    sum.display();

    Complex diff = c1 - c2;
    diff.display();

    Complex prod = c1 * c2;
    prod.display();

    Complex quot = c1 / c2;
    quot.display();

    Complex conj = c1.conjugate();
    conj.display();

    return 0;
}
