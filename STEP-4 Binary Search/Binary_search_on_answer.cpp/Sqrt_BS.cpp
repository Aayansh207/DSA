#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int start=0,end=n-1,ans=0;
    while(start<=end){
        int mid=(start+end)/2;
        int sq=mid*mid;
        if(sq==n){cout<<"The square root is : "<<mid;return 0;}
        else if(sq<n){ans=mid;start=mid+1;}
        else{end=mid-1;}
    }
    cout<<"The square root is : "<<ans;
    return 0;
}