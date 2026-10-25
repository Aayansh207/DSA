// LeetCode==>26
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int i,k=1;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=nums[k-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;}

int main(){
    vector<int> arr={1,1,5,6};
    removeDuplicates(arr);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}