#include<iostream>
using namespace std;

class Stack {
private:
    int top;
    int *arr;
    int size;
public:
    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }

    ~Stack() {
        delete[] arr;
    }

    bool isEmpty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }

    bool isFull() {
        if (top == size - 1) {
            return true;
        }
        else {
            return false;
        }
    }

    void push(int val) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
        }
        else {
            top++;
            arr[top] = val;
            cout << val << " pushed to Stack." << endl;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return 0;
        }
        else {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

    void display() {
        cout << "All values in the Stack are: " << endl;
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of the Stack: ";
    cin >> size;
    Stack s(size);
    int option, value;
    do {
        cout << "What operation do you want to perform? Select Option Number. Enter 0 to exit." << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. Display()" << endl;
        cin >> option;
        switch (option) {
        case 0:
            break;
        case 1:
            cout << "Enter value to push to Stack: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            cout << "Popped value: " << s.pop() << endl;
            break;
        case 3:
            s.display();
            break;
        default:
            cout << "Invalid Option Selected. Please try again." << endl;
            break;
        }
    } while (option != 0);
    return 0;
}
