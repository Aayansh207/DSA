#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int max_el(vector<vector<int>>& matrix,int row){
        int ma=0;int ind=0;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][row]>ma){ma=matrix[i][row];ind=i;}
        }
        return ind;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();int n=mat[0].size();
        int start=0;int end=mat[0].size();
        while(start<=end){
            int mid=(start+end)/2;
            int row=max_el(mat,mid);
            int left= mid==0 ? -1:mat[row][mid-1];
            int right= mid==n-1 ? -1:mat[row][mid+1];
            if(mat[row][mid]>left && mat[row][mid]>right){return {row,mid};}
            else if(mat[row][mid]<left){end=mid-1;}
            else start=mid+1;
        }
        return {-1,-1};
    }
};

int main(){
    
    return 0;
}