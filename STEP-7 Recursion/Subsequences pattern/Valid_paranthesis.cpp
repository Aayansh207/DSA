#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void generate(vector<string> &nums,string current,int open,int close,int n){
        if(open==n && close==n){nums.push_back(current);return;}
        if(open<n){generate(nums,current+"(",open+1,close,n);}
        if(open-close>0){generate(nums,current+")",open,close+1,n);}
    }
    vector<string> generateParenthesis(int n) {
        vector<string> abcd;
        generate(abcd,"",0,0,n);
        return abcd;
    }
};
int main(){
    return 0;
}