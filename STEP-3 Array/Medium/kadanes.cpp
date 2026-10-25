#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int k=0;
        int sum=nums[0];
        for(int i=0;i<nums.size();i++){
            k=max(nums[i],nums[i]+k);
            sum=max(sum,k);
        }
        return sum;
    }
};