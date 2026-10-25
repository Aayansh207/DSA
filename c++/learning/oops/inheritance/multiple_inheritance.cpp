#include <iostream>
using namespace std;

// ----------- Base Class 1 -----------
class Base1 {
protected:
    int base1int;

public:
    void set_base1int(int a) {
        base1int = a;
    }
};

// ----------- Base Class 2 -----------
class Base2 {
protected:
    int base2int;

public:
    void set_base2int(int a) {
        base2int = a;
    }
};

// ----------- Base Class 3 -----------
class Base3 {
protected:
    int base3int;

public:
    void set_base3int(int a) {
        base3int = a;
    }
};

// ----------- Derived Class (Inheriting Base1, Base2, Base3) -----------
class Derived : public Base1, public Base2, public Base3 {
public:
    void show() {
        cout << "The value from Base1 is: " << base1int << endl;
        cout << "The value from Base2 is: " << base2int << endl;
        cout << "The value from Base3 is: " << base3int << endl;
        cout << "Total sum is: " << (base1int + base2int + base3int) << endl;
    }
};

// ----------- Main Function -----------
int main() {
    Derived harry;

    harry.set_base1int(25);  // Inherited from Base1
    harry.set_base2int(5);   // Inherited from Base2
    harry.set_base3int(15);  // Inherited from Base3

    harry.show();            // Method from Derived

    return 0;
}
