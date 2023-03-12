#include <iostream>
using namespace std;

float area(double radius) {
    return 3.1415 * radius * radius;
}

float area(float side) {
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
    cout << "2. Area of Square \n";
    cout << "3. Area of Triangle\n";
    cout << "4. Area of Rectangle\n";
    cout << "0. Exit\n";
}

int main() {
    int choice;
    double radius;
    float side, base, height;
// Do while loop added for simplicity
    do {
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
            case 0:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
    }
    }while(choice != 0);
    return 0;
}
