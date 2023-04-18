#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    void set(double r, double i) {
        real = r;
        imag = i;
    }

    void add(const Complex& c, Complex& result) {
        double r = real + c.real;
        double i = imag + c.imag;
        result.set(r, i);
    }

    void subtract(const Complex& c, Complex& result) {
        double r = real - c.real;
        double i = imag - c.imag;
        result.set(r, i);
    }

    void multiply(const Complex& c, Complex& result) {
        double r = real * c.real - imag * c.imag;
        double i = real * c.imag + imag * c.real;
        result.set(r, i);
    }

    void divide(const Complex& c, Complex& result) {
        double den = c.real * c.real + c.imag * c.imag;
        double r = (real * c.real + imag * c.imag) / den;
        double i = (imag * c.real - real * c.imag) / den;
        result.set(r, i);
    }

    void conjugate(Complex& result) {
        result.set(real, -imag);
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
    //Complex c1;
    //c1.set(2, 3);
    //Complex c2;
    //c2.set(4, 5);

    int a,b;

    cout<<"Complex number 1:\nEnter Real Part:";
    cin>>a;
    cout<<"Enter Complex Part: ";
    cin>>b;
    Complex c1;
    c1.set(a,b);
    cout<<"\nComplex number 2:\nEnter Real Part:";
    cin>>a;
    cout<<"Enter Complex Part: ";
    cin>>b;
    Complex c2;
    c2.set(a, b);

    //SUM
    cout<<endl;
    cout<<"Sum"<<endl;
    Complex sum;
    c1.add(c2, sum);
    sum.display();


    //Diffrence
    cout<<endl;
    cout<<"Diffrence"<<endl;
    Complex diff;
    c1.subtract(c2, diff);
    diff.display();

    
    //Product
    cout<<endl;
    cout<<"Product"<<endl;
    Complex prod;
    c1.multiply(c2, prod);
    prod.display();

    //Division
    cout<<endl;
    cout<<"Division"<<endl;
    Complex quot;
    c1.divide(c2, quot);
    quot.display();


    //Conjugate
    cout<<endl;
    cout<<"Complex Conjugate"<<endl;
    Complex conj1;
    cout<<"Complex conjugate of c1: ";
    c1.conjugate(conj1);
    conj1.display();
    Complex conj2;
    cout<<"Complex conjugate of c2: ";
    c2.conjugate(conj2);
    conj2.display();
    cout<<endl;
    return 0;
}
