#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> &mat) {
    int max1=0;int row_index=-1;
    for(int i=0;i<mat.size();i++){
        vector<int> row=mat[i];
        int ind1=upper_bound(row.begin(),row.end(),0)-row.begin();
        int ones=row.size()-ind1;
        if(ones>max1) {
            max1=ones;
            row_index=i;
        }
    }
    return row_index; 
}

int main() {
    vector<vector<int>> mat1 = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
    cout << "Row with max 1s (Test 1): " << rowWithMax1s(mat1) << endl;

    vector<vector<int>> mat2 = {
        {0, 0, 0},
        {0, 0, 1},
        {0, 1, 1}
    };
    cout << "Row with max 1s (Test 2): " << rowWithMax1s(mat2) << endl;

    vector<vector<int>> mat3 = {
        {0, 0},
        {0, 0}
    };
    cout << "Row with max 1s (Test 3): " << rowWithMax1s(mat3) << endl;

    vector<vector<int>> mat4 = {
        {1, 1, 1},
        {1, 1, 1},
        {0, 0, 0}
    };
    cout << "Row with max 1s (Test 4): " << rowWithMax1s(mat4) << endl;

    return 0;
}
