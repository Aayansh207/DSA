#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nums2=nums;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            int val=(nums[i]+nums[j]);
            if(val==target){break;}
            if(val<target){i++;}
            if(val>target){j--;}
        }
        int a = -1, b = -1;
        for (int k = 0; k < nums2.size(); ++k) {
            if (nums2[k] == nums[i] && a == -1) a = k;
            else if (nums2[k] == nums[j] && b == -1) b = k;
        }
        return {a,b};
    }

int main(){
        vector<int> ab={2,7,11,15};
        vector<int> abcd=twoSum(ab,9);
        for(int x:abcd){
            cout<<x<<" ";
        }
        return 0;
}