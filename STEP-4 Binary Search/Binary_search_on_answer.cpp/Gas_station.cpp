#include <bits/stdc++.h>
using namespace std;

bool isPossible(const vector<int>& arr, int k, double mid) {
    int n = arr.size();
    int required = 0;
    for (int i = 0; i < n - 1; i++) {
        double gap = arr[i + 1] - arr[i];
        required += (int)(gap / mid);
    }
    return required <= k;
}

double minmaxGasDist(vector<int>& arr, int k) {
    double low = 0;
    double high = arr.back() - arr.front();
    double eps = 1e-6;
    while (high - low > eps) {
        double mid = (low + high) / 2.0;
        if (isPossible(arr, k, mid)) {high = mid;} 
        else {low = mid;}
    }
    return high;
}

int main() {
    int n, k;
    cout << "Enter number of stations and k: ";
    cin >> n >> k;
    vector<int> arr(n);
    cout << "Enter positions of gas stations: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    double result = minmaxGasDist(arr, k);
    cout << fixed << setprecision(6) << "Minimum maximum distance: " << result << endl;

    return 0;
}
