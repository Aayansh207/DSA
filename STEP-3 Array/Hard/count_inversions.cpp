#include<bits/stdc++.h>
using namespace std;

int count1=0;

void conquer(vector<int> &nums,int start,int mid, int end){
    int i=start,j=mid+1;
    vector<int> abcd;
    while(i<=mid && j<=end){
        if(nums[i]<=nums[j]){abcd.push_back(nums[i]);i++;}
        else{abcd.push_back(nums[j]);j++;count1+=mid-i+1;}
    }
    while (i <= mid) abcd.push_back(nums[i++]);
    while (j <= end) abcd.push_back(nums[j++]);

    for (int k = start; k <= end; k++) {
        nums[k] = abcd[k - start];
    }
}

void divide(vector<int> &nums,int start,int end){
    if(start>=end){return;}
    int mid=(start+end)/2;
    divide(nums,start,mid);
    divide(nums,mid+1,end);
    conquer(nums,start,mid,end);
}

int main() {
    vector<int> nums = {8, 4, 2, 1};
    divide(nums, 0, nums.size() - 1);
    cout << "Number of inversions: " << count1 << "\n";
    return 0;
}