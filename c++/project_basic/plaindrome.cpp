#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    if (N < 0) { cout << "False"; return 0; }   // negative numbers aren’t palindromes
    int orig = N, rev = 0;
    while (N) {
        rev = rev * 10 + N % 10;
        N /= 10;
    }
    cout << (orig == rev ? "True" : "False");
    return 0;
}