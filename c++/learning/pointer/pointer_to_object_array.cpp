#include<iostream>
using namespace std;

class ShopItem {
    int id;
    float price;

public:
    void setData(int a, float b) {
        id = a;
        price = b;
    }

    void getData(void) {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main() {
    int size = 3;
    ShopItem* ptr = new ShopItem[size]; // Dynamic array of objects
    ShopItem* ptrTemp = ptr;

    int p;
    float q;

    // Input loop
    for (int i = 0; i < size; i++) {
        cout << "Enter Id and Price of item " << i + 1 << ": ";
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    // Reset pointer back to start
    ptr = ptrTemp;

    // Output loop
    for (int i = 0; i < size; i++) {
        cout << "\nItem number: " << i + 1 << endl;
        ptr->getData();
        ptr++;
    }

    // Free memory
    delete[] ptrTemp;

    return 0;
}
