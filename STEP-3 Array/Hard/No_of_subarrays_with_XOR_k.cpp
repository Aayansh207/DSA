#include <bits/stdc++.h>
using namespace std;

int countSubarraysWithXorK(vector<int>& arr, int k) {
    unordered_map<int,int> freq;
    int xr = 0, count = 0;
    for(int num : arr) {
        xr ^= num;
        if(xr == k) count++;
        if(freq.find(xr ^ k) != freq.end()) {
            count += freq[xr ^ k];
        }
        freq[xr]++;
    }
    return count;
}

int main() {
    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;
    cout << countSubarraysWithXorK(arr, k) << endl; // Output: 4
    return 0;
}
