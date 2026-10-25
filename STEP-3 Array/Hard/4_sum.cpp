#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicates for i
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // skip duplicates for j

                long long newTarget = (long long)target - nums[i] - nums[j];
                int left = j + 1, right = n - 1;

                while (left < right) {
                    long long sum = nums[left] + nums[right];
                    if (sum < newTarget) {
                        left++;
                    } else if (sum > newTarget) {
                        right--;
                    } else {
                        answer.push_back({nums[i], nums[j], nums[left], nums[right]});
                        // skip duplicates
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;
                        left++; right--;
                    }
                }
            }
        }
        return answer;
    }
};

int main(){
    
    return 0;
}