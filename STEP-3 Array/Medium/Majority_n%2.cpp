#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n=0;
        int candidate=0;
        for(int c:nums){
            if(n==0){candidate=c;}
            n+= c==candidate ? 1:-1;
        }
        return candidate;
    }

int main(){
    vector<int> abcd={2,2,1,1,1,2,2};
    cout<<majorityElement(abcd);
    return 0;
}