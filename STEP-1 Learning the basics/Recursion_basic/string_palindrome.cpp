#include <bits/stdc++.h>
using namespace std;

bool check(string s, int i = 0) {
    int n = s.length();
    if (i >= n / 2) return true;
    if (s[i] != s[n - i - 1]) return false;
    return check(s, i + 1);
}

int main() {
    cout << !check("ananta");  // Output: 0 (false)
    return 0;
}
