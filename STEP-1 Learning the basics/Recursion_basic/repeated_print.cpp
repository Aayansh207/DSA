#include <iostream>
#include <string>
using namespace std;

void repetition(const string& s, int n, int i = 1) {
    if (i > n) return;
    cout << s << '\n';
    repetition(s, n, i + 1);
}

int main() {
    repetition("Aayansh", 12);
    return 0;
}
