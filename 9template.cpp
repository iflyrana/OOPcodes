#include <iostream>

// Class template
template <typename T>
class MyData {
private:
    T data;

public:
    MyData() {
        data = T();
    }

    void setData(T value) {
        data = value;
    }

    T getData() {
        return data;
    }
};

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Using the class template
    MyData<int> myInt;
    myInt.setData(10);
    std::cout << "Value: " << myInt.getData() << std::endl;

    MyData<double> myDouble;
    myDouble.setData(3.14);
    std::cout << "Value: " << myDouble.getData() << std::endl;

    // Using the function template
    int result = add(5, 10);
    std::cout << "Addition result: " << result << std::endl;

    double result2 = add(2.5, 3.7);
    std::cout << "Addition result: " << result2 << std::endl;

    return 0;
}
