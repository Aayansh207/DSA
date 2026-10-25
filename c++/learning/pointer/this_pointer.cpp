#include<iostream>
using namespace std;
class A {
    int a;
public:
    A &setData(int a) {
        this->a = a;
        return *this; // return reference of current object
    }

    void getData() {
        cout << "The value of a is " << a << endl;
    }
};

int main() {
    A obj;
    obj.setData(4).getData();  // function chaining
    return 0;
}
