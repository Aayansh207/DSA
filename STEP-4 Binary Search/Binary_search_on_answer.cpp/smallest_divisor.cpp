#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start=1;
        int end=*max_element(nums.begin(),nums.end());
        while(start<end){
            int mid=(start+end)/2;
            int ans=0;
            for(int i:nums){ans+=(i-1)/mid+1;}
            if(ans<=threshold){end=mid;}
            else{start=mid+1;}
        }
        return start;
    }
};