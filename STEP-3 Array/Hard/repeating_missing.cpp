#include <bits/stdc++.h>
using namespace std;

pair<int,int> findRepeatingMissing(const vector<int>& arr) {
    long long n = arr.size();

    long long S  = n * (n + 1) / 2;                 // expected sum
    long long S2 = n * (n + 1) * (2 * n + 1) / 6;   // expected sum of squares

    long long Sa = 0, Sa2 = 0;
    for (int x : arr) {
        Sa  += x;
        Sa2 += 1LL * x * x;
    }

    long long diff1 = Sa - S;            // A - B
    long long diff2 = Sa2 - S2;          // A^2 - B^2
    long long sumAB = diff2 / diff1;     // A + B

    long long A = (diff1 + sumAB) / 2;   // repeating
    long long B = A - diff1;             // missing
    return { (int)A, (int)B };
}

int main() {
    vector<int> arr = {3, 1, 2, 5, 3};
    pair<int,int> ans = findRepeatingMissing(arr);
    int A = ans.first;   // repeating
    int B = ans.second;  // missing
    cout << "Repeating: " << A << ", Missing: " << B << "\n";
    return 0;
}
