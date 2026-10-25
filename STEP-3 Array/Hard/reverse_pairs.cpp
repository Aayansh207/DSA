#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}
class Solution {
public:
    int c=0;
    void conquer(vector<int>&nums,int start,int mid,int end){
        int j = mid + 1;
        for (int i = start; i <= mid; i++) {
            while (j <= end && (long long)nums[i] > 2LL * nums[j]) {j++;}
            c += (j - (mid + 1));
        }
        int i=start;j=mid+1;
        vector<int> abcd;
        while(i<=mid && j<=end){
            if(nums[i]<=nums[j]){abcd.push_back(nums[i]);i++;}
            else{abcd.push_back(nums[j]);j++;}
        }
        while(i<=mid){abcd.push_back(nums[i]);i++;}
        while(j<=end){abcd.push_back(nums[j]);j++;}

        for(int x=0;x<abcd.size();x++){
            nums[start+x]=abcd[x];
        }
    }

    void divide(vector<int>& nums,int start,int end){
        if(start>=end){return;}
        int mid=(start+end)/2;
        divide(nums,start,mid);
        divide(nums,mid+1,end);
        conquer(nums,start,mid,end);
    }
    int reversePairs(vector<int>& nums) {
        divide(nums,0,nums.size()-1);
        return c;
    }
};