#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> abcd={102,103,101,100,104,4,3,5,3,3,5,77,7,1,1,1,6};
    unordered_set<int> mains1(abcd.begin(), abcd.end());
    int answer=0;
    for(int x:mains1){
        int cou=1;
        if(mains1.find(x-1)==mains1.end()){
            while(true){
            if(mains1.find(x+1)==mains1.end()){break;}
            cou++;x++;}
        }
        if(cou>answer){answer=cou;}
    }
    cout<<answer;
    return 0;
}