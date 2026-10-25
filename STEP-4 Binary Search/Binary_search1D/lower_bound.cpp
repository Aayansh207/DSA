#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> abcd={3,4,6,6,6,7,8,9,9,9,10,10,11,11,11,12,13,14,15,15,16,17,17,18};
    int target;cin>>target;
    int start=0,end=abcd.size()-1;
    int answer=abcd.size();
    while(start<=end){
        int mid=(start+end)/2;
        if(abcd[mid]>=target){answer=mid;end=mid-1;}
        else{start=mid+1;}
    }
    cout<<answer;
    return 0;
}