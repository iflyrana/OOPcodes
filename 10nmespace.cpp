#include <iostream>

namespace FirstNamespace {
    void display() {
        std::cout << "Hello from FirstNamespace!" << std::endl;
    }
}

namespace SecondNamespace {
    void display() {
        std::cout << "Hello from SecondNamespace!" << std::endl;
    }
}

int main() {
    FirstNamespace::display();   // Call display() from FirstNamespace
    SecondNamespace::display();  // Call display() from SecondNamespace

    return 0;
}
