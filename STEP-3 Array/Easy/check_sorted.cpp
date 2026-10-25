// LeetCode==>1752
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){count++;}
        }
        cout<<count;
        if(nums.back()>nums[0]){count++;}
        if(count<=1){return true;}
        return false;
    }
int main()
{
    vector<int> nums={3,4,5,1,2};
    cout<<check(nums);
    return 0;
}