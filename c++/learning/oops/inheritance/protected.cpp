#include <iostream>
using namespace std;

// Base class with private and protected members
class Base {
protected:
    int a = 10; // Protected member
private:
    int b = 20; // Private member
};

// Derived class inheriting Base in protected mode
class Derived : protected Base {
public:
    void show() {
        cout << "Accessing protected member a from Derived class: " << a << endl;

        // cout << b;  // ❌ Error: 'b' is private in Base, not accessible even in Derived
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    derivedObj.show(); // ✅ Allowed: calling public function of Derived

    // cout << derivedObj.a; // ❌ Error: 'a' is protected in Derived due to protected inheritance

    return 0;
}
