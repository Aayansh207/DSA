#include<bits/stdc++.h>
using namespace std;

int pow(int base,int exp){
    int answer=1;
    for(int i=0;i<exp;i++){
        answer*=base;
    }
    return answer;
}

int main(){
    int n;cin>>n;
    int exp;cin>>exp;
    int start=0,end=n-1,ans=0;
    while(start<=end){
        int mid=(start+end)/2;
        int sq=pow(mid,exp);
        if(sq==n){cout<<"The square root is : "<<mid;return 0;}
        else if(sq<n){ans=mid;start=mid+1;}
        else{end=mid-1;}
    }
    cout<<"The square root is : "<<ans;
    return 0;
}