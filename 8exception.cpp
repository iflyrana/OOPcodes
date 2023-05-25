#include <iostream>
#include <stdexcept>

using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        if (b == 0)
            throw runtime_error("Error: Cannot multiply by 0");
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0)
            throw runtime_error("Error: Cannot divide by 0");
        return a / b;
    }
};

int main() {
    double a, b;
    int operation;

    Calculator calculator;

    try {
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << "Enter the operation (1: +, 2: -, 3: *, 4: /): ";
        cin >> operation;

        double result;
        switch (operation) {
            case 1:
                result = calculator.add(a, b);
                break;
            case 2:
                result = calculator.subtract(a, b);
                break;
            case 3:
                result = calculator.multiply(a, b);
                break;
            case 4:
                result = calculator.divide(a, b);
                break;
            default:
                throw runtime_error("Error: Invalid operation");
        }

        cout << "Result: " << result << endl;
    }
    catch (const exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
