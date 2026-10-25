#include <iostream>
using namespace std;

class simpleCalc {
protected:
    int a, b;
public:
    void set_data() {
        cout << "Enter the first value: ";
        cin >> a;
        cout << "Enter the second value: ";
        cin >> b;
    }

    void add() {
        cout << "Addition: " << a + b << endl;
    }

    void subtract() {
        cout << "Subtraction: " << a - b << endl;
    }

    void product() {
        cout << "Multiplication: " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division: " << (float)a / b << endl;
        else
            cout << "Division by zero error!" << endl;
    }
};

class scientificCalc {
protected:
    int a, b;
public:
    void set_data_sci() {
        cout << "Enter the base value: ";
        cin >> a;
        cout << "Enter the exponent value: ";
        cin >> b;
    }

    void pow() {
        int p = 1;
        for (int i = 0; i < b; i++) {
            p *= a;
        }
        cout << "Power: " << p << endl;
    }
};

// ✅ Fixed hybridCalc: Doesn't duplicate base class
class hybridCalc : public simpleCalc, public scientificCalc {
public:
    void all_ops() {
        // From simpleCalc
        set_data();
        add();
        subtract();
        product();
        divide();

        // From scientificCalc
        set_data_sci();
        pow();
    }
};

int main() {
    hybridCalc Aayansh_calc;
    Aayansh_calc.all_ops();
    return 0;
}
