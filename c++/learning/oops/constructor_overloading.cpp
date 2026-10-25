#include <iostream>
using namespace std;

class Complex {
    int a, b;

public:
    // Default Constructor (0 arguments)
    Complex() {
        a = 0;
        b = 0;
    }

    // Constructor with 2 arguments
    Complex(int x, int y) {
        a = x;
        b = y;
    }

    // Constructor with 1 argument
    Complex(int x) {
        a = x;
        b = 0;
    }

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex c1(4, 6);  // Calls constructor with 2 arguments
    c1.printNumber();  // Output: Your number is 4 + 6i

    Complex c2(5);     // Calls constructor with 1 argument
    c2.printNumber();  // Output: Your number is 5 + 0i

    Complex c3;        // Calls default constructor
    c3.printNumber();  // Output: Your number is 0 + 0i

    return 0;
}
