#include <bits/stdc++.h>
using namespace std;

int findMedian(vector<vector<int>> &matrix, int m, int n) {
    
}

int main() {
    vector<vector<int>> mat1 = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };
    cout << "Median of mat1: " << findMedian(mat1, 3, 3) << endl;
    vector<vector<int>> mat2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Median of mat2: " << findMedian(mat2, 3, 3) << endl;
    vector<vector<int>> mat3 = {
        {1, 10, 20},
        {15, 25, 35},
        {5, 30, 40}
    };
    cout << "Median of mat3: " << findMedian(mat3, 3, 3) << endl;
    return 0;
}
