#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start=0,end=arr.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            int gap=arr[mid]-mid-1;
            if(gap<k){start=mid+1;}
            else{end=mid-1;}
        }
        return start+k;
    }
};