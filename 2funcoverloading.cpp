#include <iostream>
using namespace std;

float area(float radius) {
    return 3.1415 * radius * radius;
}

float area(int side) {
    return side * side;
}

float area(float base, float height) {
    return 0.5 * base * height;
}

float area(float base, float height, float dummy) {
    return base * height;
}

void displayMenu() {
        cout << "Enter your choice:\n";
    cout << "1. Area of Circle\n";
    cout << "2. Area of Square\n";
    cout << "3. Area of Triangle\n";
    cout << "4. Area of Rectangle\n";
}

int main() {
    int choice, side;
    float radius, base, height;
    displayMenu();
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter radius of circle: ";
            cin >> radius;
            cout << "Area of circle is " << area(radius) << endl;
            break;
        case 2:
            cout << "Enter side of square: ";
            cin >> side;
            cout << "Area of square is " << area(side) << endl;
            break;
        case 3:
            cout << "Enter base of triangle: ";
            cin >> base;
            cout << "Enter height of triangle: ";
            cin >> height;
            cout << "Area of triangle is " << area(base, height) << endl;
            break;
        case 4:
            cout << "Enter base of rectangle: ";
            cin >> base;
            cout << "Enter height of rectangle: ";
            cin >> height;
            cout << "Area of rectangle is " << area(base, height, 0) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
