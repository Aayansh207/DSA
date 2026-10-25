#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i+1]) {
            i--;
        }
        if(i==-1){reverse(nums.begin(),nums.end());return;}
        cout<<"i : "<<i<<endl;
        int k=INT_MAX,ind=0;
        for(int x=i+1;x<nums.size();x++){
            if(nums[x]>nums[i] && nums[x]<=k){k=nums[x];ind=x;}
        }
        swap(nums[ind],nums[i]);
        reverse(nums.begin() + i + 1, nums.end());
    }
};
