#include <iostream>
using namespace std;

int main() {
    float* p = new float(40.78);  // dynamic float initialized to 40.78
    cout << "The value at address p is " << *p << endl;
    return 0;
}


// With arrays
#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3];  // dynamic array of size 3

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}


// Delete operator
#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    delete[] arr;  // memory freed

    // accessing freed memory gives undefined/garbage values
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}
