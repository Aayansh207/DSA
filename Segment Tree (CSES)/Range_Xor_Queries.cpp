#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,q;
    cin>>n>>q;
    vector<long long> a(n);
    vector<long long> pref(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
        pref[i+1]=pref[i]^a[i];
    }
    for(long long i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        cout<<(pref[y]^pref[x-1])<<"\n";
    }
}