#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &nums,int start,int end){
    int left=start,right=end;
    while(left<right){
    while(nums[left]<=nums[start] && left<=end-1){left++;}
    while(nums[right]>nums[start] && right>=start+1){right--;}
    if(left<right){swap(nums[left],nums[right]);}
    }
    swap(nums[start],nums[right]);
    return right;
}

void quick_sort(vector<int> &nums,int start,int end){
    if(start>=end){return;}
    int mid=partition(nums,start,end);
    quick_sort(nums,start,mid-1);
    quick_sort(nums,mid+1,end);
}

int main(){
    vector<int> arr={4,2,7,5};
    quick_sort(arr,0,3);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}