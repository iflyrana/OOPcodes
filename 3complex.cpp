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
        if(imag < 0) {
            cout << real << imag << "i" << endl;  
        }
        else {
            cout << real << " + " << imag << "i" << endl;
        }
    }
};

int main() {
    int a,b;

    cout<<"Complex number 1:\nEnter Real Part:";
    cin>>a;
    cout<<"Enter Complex Part: ";
    cin>>b;
    Complex c1(a, b);
    cout<<"\nComplex number 2:\nEnter Real Part:";
    cin>>a;
    cout<<"Enter Complex Part: ";
    cin>>b;
    Complex c2(a, b);
    
    cout<<endl;
    cout<<"Sum"<<endl;
    Complex sum = c1 + c2;
    sum.display();
    cout<<endl;

    cout<<"Diffrence"<<endl;
    Complex diff = c1 - c2;
    diff.display();
    cout<<endl;

    cout<<"Product"<<endl;
    Complex prod = c1 * c2;
    prod.display();
    cout<<endl;

    cout<<"Division"<<endl;
    Complex quot = c1 / c2;
    quot.display();
    cout<<endl;

    cout<<"Complex Conjugate"<<endl;
    Complex conj1 = c1.conjugate();
    cout<<"Complex conjugate of c1: ";
    conj1.display();
    Complex conj2 = c2.conjugate();
    cout<<"Complex conjugate of c2: ";
    conj2.display();
    cout << endl;

    return 0;
}
