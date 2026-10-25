#include <bits/stdc++.h>
using namespace std;

void rev(int *arr, int n, int i = 0) {
    if (i >= n / 2) return;
    swap(arr[i], arr[n - i - 1]);
    rev(arr, n, i + 1);
}

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    rev(arr, 8);
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
