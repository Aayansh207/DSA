#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int largest=0;
        int ones=0;
        for(int c:nums){
            if(c==1){ones++;}
            if(c!=1){ones=0;}
            if(ones>largest){largest=ones;}
            }
        return largest;
    }

int main(){
    vector<int> nums={1,1,1,1,4,3,1,1,1,3,5,4,3,1,1,1,1,1,1,1,1,5,7,5,4,3,2,24};
    cout<<findMaxConsecutiveOnes(nums);

    return 0;
}