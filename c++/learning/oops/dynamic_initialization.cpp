#include <iostream>
using namespace std;

class BankDeposit {
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}  // Default constructor

    // Constructor when interest rate is float (e.g., 0.04)
    BankDeposit(int p, int y, float r) {
        principal = p;
        years = y;
        interestRate = r;
        returnValue = principal;

        for (int i = 0; i < years; i++) {
            returnValue = returnValue * (1 + interestRate);
        }
    }

    // Constructor when interest rate is int (e.g., 5 for 5%)
    BankDeposit(int p, int y, int r) {
        principal = p;
        years = y;
        interestRate = float(r) / 100;
        returnValue = principal;

        for (int i = 0; i < years; i++) {
            returnValue = returnValue * (1 + interestRate);
        }
    }

    void show() {
        cout << "\nPrincipal amount was " << principal
             << ". Return value after " << years
             << " years is " << returnValue << endl;
    }
};

int main() {
    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p y and r (float interest rate): ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);  // Calls float version
    bd1.show();

    cout << "\nEnter the value of p y and R (int interest rate): ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);  // Calls int version
    bd2.show();

    return 0;
}
