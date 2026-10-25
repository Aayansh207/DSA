#include <iostream>
using namespace std;

int main() {
    cout << "For Loop: Counting from 1 to 5\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    cout << "While Loop: Counting down from 5 to 1\n";
    int j = 5;
    while (j >= 1) {
        cout << j << " ";
        j--;
    }
    cout << "\n\n";

    cout << "Do-While Loop: Printing menu once even if condition fails\n";
    int choice = 10;
    do {
        cout << "Menu:\n1. Start\n2. Settings\n3. Exit\n";
        cout << "Invalid choice, exiting...\n";
    } while (choice >= 1 && choice <= 3);

    return 0;
}
