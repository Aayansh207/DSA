#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int> &nums,int k,int mid){
        int sub_array=1;int sum_array=0;
        for(int x:nums){
            if(sum_array+x>mid){
                sub_array++;
                sum_array=x;
            }
            else{sum_array+=x;}
        }
        return sub_array<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int start=*max_element(nums.begin(),nums.end());
        int end=accumulate(nums.begin(),nums.end(),0);
        while(start<=end){
            int mid=(start+end)/2;
            if(check(nums,k,mid)){end=mid-1;}
            else{start=mid+1;}
        }
        return start;
    }
};

int main(){
    
    return 0;
}