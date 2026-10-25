#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums,int k,int mid){
    int cow=1,last=nums[0];
    for(int i=1;i<nums.size();i++){
        if((nums[i]-last)>=mid){cow++;last=nums[i];}
        if(cow>=k) return true;
    }
    return false;
}

int aggressive_cow(vector<int> &nums,int k){
    sort(nums.begin(),nums.end());
    int start=1;int end=nums.back()-nums[0];int ans=0;
    while(start<=end){
        int mid=(start+end)/2;
        if(check(nums,k,mid)){start=mid+1;ans=mid;}
        else{end=mid-1;}
    }
    return ans;
}

int main(){
    vector<int> nums={0, 3, 4, 7, 10, 9};
    int k;cin>>k;
    cout<<aggressive_cow(nums,k);
    return 0;
}