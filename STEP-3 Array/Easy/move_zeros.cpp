#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        for(int k=0;k<nums.size();k++){
            if(i>=nums.size() || j>=nums.size()) break;
            if(nums[j]==0){
                j++;
                continue;
            }
            swap(nums[i],nums[j]);
        i++;j++;
        }  
    }

int main(){
    vector<int> arr={0,11,0,6,4};
    moveZeroes(arr);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}