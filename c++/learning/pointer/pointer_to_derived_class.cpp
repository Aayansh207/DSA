#include<iostream>
using namespace std;

class BaseClass {
public:
    int var_base;
    void display() {
        cout << "Displaying Base class variable var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    int var_derived;
    void display() {
        cout << "Displaying Base class variable var_base: " << var_base << endl;
        cout << "Displaying Derived class variable var_derived: " << var_derived << endl;
    }
};


int main() {
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    // Point base class pointer to derived class object
    base_class_pointer = &obj_derived;

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; ❌ ERROR: Not allowed

    base_class_pointer->display(); // Will call BaseClass::display (not Derived's)

    base_class_pointer->var_base = 3400;
    base_class_pointer->display(); // Still calls BaseClass::display

    // Now using derived class pointer
    DerivedClass *derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;     // ✅ Allowed
    derived_class_pointer->var_derived = 98;     // ✅ Allowed
    derived_class_pointer->display();           // Will call DerivedClass::display

    return 0;
}
