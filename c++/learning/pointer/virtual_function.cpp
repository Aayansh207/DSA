#include<iostream>
using namespace std;

class BaseClass {
public:
    int var_base = 1;

    virtual void display() {
        cout << "1 Displaying Base class variable var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    int var_derived = 2;

    void display() override {
        cout << "2 Displaying Base class variable var_base: " << var_base << endl;
        cout << "2 Displaying Derived class variable var_derived: " << var_derived << endl;
    }
};

int main() {
    BaseClass* base_class_pointer;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;

    base_class_pointer->display(); // ✅ Calls DerivedClass::display()
    return 0;
}
