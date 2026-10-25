#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}
class Solution {
public:
    bool check(vector<int>& weights,int mid, int days){
        int day=1;long cou=0;int i=0;
        while(i<weights.size()){
            if(cou+weights[i]>mid){
                cou=0;
                day++;
            }
            cou+=weights[i];
            i++;
        }
        return day<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int start=*max_element(weights.begin(),weights.end());
        int end=accumulate(weights.begin(),weights.end(),0);
        while(start<end){
            int mid=(start+end)/2;
            if(check(weights,mid,days)){end=mid;}
            else{start=mid+1;}
        }
        return start;
    }
};