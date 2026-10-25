#include <bits/stdc++.h>
using namespace std;

string prime(int ab) {
    if (ab <= 1) return "no";
    for (int i = 2; i*i <= ab; i++) {
        if (ab % i == 0) {
            return "no";
        }
    }
    return "yes";
}

int main() {
    int a = 27;
    cout << prime(a);
    return 0;
}
