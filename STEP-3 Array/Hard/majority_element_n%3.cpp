#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int val1 = INT_MIN, val2 = INT_MIN;
        for(int num : nums){
            if(val1 == num) cnt1++;
            else if(val2 == num) cnt2++;
            else if(cnt1 == 0) { val1 = num; cnt1 = 1; }
            else if(cnt2 == 0) { val2 = num; cnt2 = 1; }
            else { cnt1--; cnt2--; }
        }
        cnt1 = cnt2 = 0;
        for(int num : nums){
            if(num == val1) cnt1++;
            else if(num == val2) cnt2++;
        }
        vector<int> ans;
        int threshold = nums.size() / 3;
        if(cnt1 > threshold) ans.push_back(val1);
        if(cnt2 > threshold) ans.push_back(val2);
        return ans;
    }
};
