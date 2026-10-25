#include<iostream>
using namespace std;

class Complex {
    int real, imaginary;

public:
    void setData(int a, int b) {
        real = a;
        imaginary = b;
    }

    void getData() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main() {
    // Dynamically creating a single object using pointer
    Complex *ptr = new Complex;

    // Access using arrow operator (preferred)
    ptr->setData(1, 54);
    ptr->getData();

    // Dynamically creating an array of objects
    Complex *ptr1 = new Complex[4];

    // Setting and getting data for first object in array
    ptr1->setData(1, 4);
    ptr1->getData();

    // Optional: delete memory (good practice)
    delete ptr;
    delete[] ptr1;

    return 0;
}
