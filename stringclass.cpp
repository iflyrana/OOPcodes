#include <iostream>
#include <cstring>

using namespace std;

class mystring {
private:
    char* str;
    int len;

public:
    // Default constructor
    mystring() {
        len = 0;
        str = new char[1];
        str[0] = '\0';
    }

    // Parameterized constructor
    mystring(const char* s) {
        len = strLength(s);
        str = new char[len + 1];
        strcpy(str, s);
    }

    // Copy constructor
    mystring(const mystring& s) {
        len = s.len;
        str = new char[len + 1];
        strcpy(str, s.str);
    }

    // Destructor
    ~mystring() {
        delete[] str;
    }

    // Accepts function
    void Accepts() {
        char buffer[100];
        cout << "Enter a string: ";
        cin.getline(buffer, 100);
        len = strLength(buffer);
        str = new char[len + 1];
        strcpy(str, buffer);
    }

    // Display function
    void Display() {
        cout << str << endl;
    }

    // Concatenation function
    mystring Concat(const mystring& s) {
        int newLen = len + s.len;
        char* newStr = new char[newLen + 1];
        strcpy(newStr, str);
        strcat(newStr, s.str);
        mystring result(newStr);
        delete[] newStr;
        return result;
    }

    // Length function
    int Length() {
        return len;
    }

    // Function to find length of a string
    int strLength(const char* s) {
        int count = 0;
        while (s[count] != '\0') {
            count++;
        }
        return count;
    }
};

int main() {
    mystring s1; // Default constructor
    cout<< "Default Consttructor output: ";
    s1.Display(); // Output: ""
    cout << endl;

    cout<< "Parameterized constructor output: ";
    mystring s2("Hello, world!"); // Parameterized constructor
    s2.Display(); // Output: "Hello, world!"
    cout << endl;

    cout<< "Hello, world! output: ";
    mystring s3 = s2; // Copy constructor
    s3.Display(); // Output: "Hello, world!"
    cout <<endl;

    mystring s4;
    s4.Accepts(); // User input
    cout << "Accept function - User Input: ";
    s4.Display();
    cout << endl;

    mystring s5;
    cout << "To concatenate with the previous string, Please ";
    s5.Accepts(); // User input

    mystring s6 = s4.Concat(s5);
    cout << "Concatenated Output: ";
    s6.Display(); // Output: Concatenated string
    cout << endl;
    
    mystring s7;
    cout << "To find out Length Please ";
    s7.Accepts(); // User input

    int length = s7.Length();
    cout << "Length of string you entered is: : " << length << endl; // Output: Length of s6

    return 0;
}