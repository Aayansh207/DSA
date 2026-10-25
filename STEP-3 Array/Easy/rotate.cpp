#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }

int main(){
    vector<int> arr={1,1,5,6};
    rotate(arr,2);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}