#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}
class Solution {
public:
    bool canMake(vector<int>& bloomDay, int m, int k,int mid){
        int bouquets=0;int flowers=0;
        for(int i:bloomDay){
        if(i<=mid) flowers++;
        else flowers=0;
        if(flowers==k){bouquets++;flowers=0;}
        }
        if(bouquets>=m) return true;
        else return false;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if ((long)m*k > n) return -1;
        int start = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int result = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (canMake(bloomDay, m, k, mid)) {
                result = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return result;
    }
};