#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i=0;int j=nums.size()-1;
        int max_pro=INT_MIN;
        int prefix=1,suffix=1;
        while(i<nums.size() && j>-1){
            prefix*=nums[i++];
            suffix*=nums[j--];
            max_pro=max(max_pro,prefix);
            max_pro=max(max_pro,suffix);
            if(prefix==0){prefix=1;}
            if(suffix==0){suffix=1;}
        }
        return max_pro;
    }
};

int main(){
    
    return 0;
}