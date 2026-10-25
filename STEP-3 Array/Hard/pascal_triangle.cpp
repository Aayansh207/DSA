#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        answer.push_back({1});
        if(numRows==1){return answer;}
        answer.push_back({1,1});
        if(numRows==2){return answer;}
        for(int i=2;i<numRows;i++){
            vector<int> temp(i+1, 1);
            for(int j=1;j<i;j++){
                temp[j]=(answer[i-1][j-1]+answer[i-1][j]);
            }
            answer.push_back(temp);
        }
        return answer;

    }
};
