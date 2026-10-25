#include <iostream>
using namespace std;

// Template with two type parameters: T1 and T2
template <class T1, class T2>
class myClass {
public:
    T1 data1;
    T2 data2;

    // Constructor
    myClass(T1 a, T2 b) {
        data1 = a;
        data2 = b;
    }

    // Display function
    void display() {
        cout << "Data1: " << data1 << " | Data2: " << data2 << endl;
    }
};

int main() {
    // Example 1: int and char
    myClass<int, char> obj1(100, 'A');
    obj1.display();  // Output: Data1: 100 | Data2: A

    // Example 2: int and float
    myClass<int, float> obj2(5, 3.14);
    obj2.display();  // Output: Data1: 5 | Data2: 3.14

    // Example 3: string and double
    myClass<string, double> obj3("Price", 99.99);
    obj3.display();  // Output: Data1: Price | Data2: 99.99

    return 0;
}
