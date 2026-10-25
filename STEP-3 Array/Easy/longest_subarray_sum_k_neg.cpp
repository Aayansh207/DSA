// for negative
#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    vector<int> abcd={10, -5, 2, -2, 7, -1, 9};
    unordered_map<int, int> mp;
    int sum=0;
    int lenmax=0;
    for(int i=0;i<abcd.size();i++){
        sum+=abcd[i];
        if(sum==k){lenmax=max(lenmax,i+1);}
        if(mp.find(sum-k)!=mp.end()){
            lenmax=max(lenmax,i-mp[sum-k]);
        }
        if(mp.find(sum)==mp.end()){mp[sum]=i;}

    }
    cout<<lenmax;
    return 0;
}