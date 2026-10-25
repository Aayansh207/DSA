#include <iostream>
using namespace std;

// Global counter
int count = 0;

class num {
public:
    // Constructor
    num() {
        count++;
        cout << "Constructor called for object number " << count << endl;
    }

    // Destructor
    ~num() {
        cout << "Destructor called for object number " << count << endl;
        count--;
    }
};

int main() {
    cout << "We are inside our main function" << endl;

    cout << "Creating first object n1" << endl;
    num n1;

    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    } // n2 and n3 are destroyed here

    cout << "Back to main" << endl;
    return 0; // n1 is destroyed here
}
