#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums,int start,int mid,int end){
    int i=start,j=mid+1;
    vector<int> abcd;
    while(i<=mid && j<=end){
        if(nums[i]<=nums[j]){abcd.push_back(nums[i]);i++;}
        if(nums[j]<nums[i]){abcd.push_back(nums[j]);j++;}
    }
    while(i<=mid){abcd.push_back(nums[i]);i++;}
    while(j<=end){abcd.push_back(nums[j]);j++;}
    for(int k=0;k<abcd.size();k++){
        nums[start+k]=abcd[k];
    }
}

void merge_sort(vector<int> &nums,int start,int end){
    if(start>=end){return;}
    int mid=(start+end)/2;
    merge_sort(nums, start,mid);
    merge_sort(nums, mid+1,end);
    merge(nums,start,mid,end);
}

int main(){
    vector<int> arr={4,2,7,5};
    merge_sort(arr,0,3);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}