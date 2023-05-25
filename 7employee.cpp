#include <iostream>
#include <string>

using namespace std;

class BasicInfo {
protected:
    string name;
    int age;
    string gender;

public:
    void getBasicInfo() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Gender: ";
        cin >> gender;
    }

    void displayBasicInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

class DepartmentInfo {
protected:
    string department;
    string designation;
    int salary;

public:
    void getDepartmentInfo() {
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Designation: ";
        cin >> designation;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDepartmentInfo() {
        cout << "Department: " << department << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Employee : public BasicInfo, public DepartmentInfo {
public:
    void getEmployeeInfo() {
        getBasicInfo();
        getDepartmentInfo();
    }

    void displayEmployeeInfo() {
        cout << "Employee Information:" << endl;
        displayBasicInfo();
        displayDepartmentInfo();
    }
};

int main() {
    Employee emp;

    cout << "Enter Employee Information: " << endl;
    emp.getEmployeeInfo();

    cout << endl << "Displaying Employee Information: " << endl;
    emp.displayEmployeeInfo();

    return 0;
}
