#include <iostream>
using namespace std;

// Base class
class Base {
    int data1; // private: not accessible directly in derived
public:
    int data2;

    void setData() {
        data1 = 10;
        data2 = 20;
    }

    int getData1() {
        return data1;
    }

    int getData2() {
        return data2;
    }
};

// Derived class
class Derived : public Base {
    int data3;
public:
    void process() {
        data3 = data2 * getData1(); // data2 is public from Base, getData1() returns private member
    }

    void display() {
        cout << "Value of data1: " << getData1() << endl;
        cout << "Value of data2: " << data2 << endl;
        cout << "Value of data3: " << data3 << endl;
    }
};

// Main function
int main() {
    Derived der;
    der.setData();     // Inherited from Base
    der.process();     // Own function
    der.display();     // Own function

    return 0;
}
