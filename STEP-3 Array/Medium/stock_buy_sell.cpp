#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int summax=0;
        int k=prices[0];
        for(int i=0;i<prices.size();i++){
            summax = max(summax,prices[i]-k);
            k = min(k,prices[i]);
        }
        return summax;
    }
};