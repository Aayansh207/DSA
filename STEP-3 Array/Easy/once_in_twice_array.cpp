#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        int XOR=0;
        for(int i=0;i<nums.size();i++){
            XOR^=nums[i];
        }
        return XOR;
    }

int main(){
    vector<int> nums={1,1,2,2,3,3,4,4,5,5,6,7,7,8,8,9,9,4,4,3,3};
    cout<<singleNumber(nums);

    return 0;
}