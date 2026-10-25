#include <iostream>
using namespace std;

class Complex {
    int a, b;

public:
    // Constructor declaration
    Complex(void);  // Default constructor

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Constructor definition
Complex :: Complex(void) {
    a = 10;
    b = 0;
    // This runs automatically when object is created
}

int main() {
    Complex c1, c2, c3;  // Constructor is called 3 times automatically
    c1.printNumber();    // Output: Your number is 10 + 0i
    c2.printNumber();    // Output: Your number is 10 + 0i
    c3.printNumber();    // Output: Your number is 10 + 0i

    return 0;
}
