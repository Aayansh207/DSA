#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;int end=*max_element(piles.begin(), piles.end());;
        while(start<=end){
            long hours=0;
            int mid=(start+end)/2;
            for(int i:piles){hours+=(i+mid-1)/mid;}
            if(h>=hours){end=mid-1;}
            else{start=mid+1;}
        }
        return start;
    }
};

int main(){
    
    return 0;
}