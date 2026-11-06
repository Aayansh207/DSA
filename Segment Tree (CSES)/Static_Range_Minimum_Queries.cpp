#include<bits/stdc++.h>
using namespace std;

class SegmentTree{
public:
    vector<long long> tree;
    long long n;
    SegmentTree(vector<long long> &a){
        n=a.size();
        tree.resize(n*4);
        build(a,0,n-1,0);
        // for(int i=0;i<4*n;i++){
        //     cout<<tree[i]<<" ";
        // }
    }
    void build(vector<long long> &a,long long l,long long r,long long i){
        if(l==r){tree[i]=a[l];return;}
        long long mid=(l+r)/2;
        build(a,l,mid,2*i+1);
        build(a,mid+1,r,2*i+2);
        tree[i]=min(tree[2*i+1],tree[2*i+2]);
    }
    long long qu(long long l,long long r,long long i,long long ql,long long qr){
        if(ql>r || qr<l){return INT_MAX;}
        if(ql<=l && qr>=r){return tree[i];}
        long long mid=(l+r)/2;
        return min(qu(l,mid,2*i+1,ql,qr),qu(mid+1,r,2*i+2,ql,qr));
    }
    long long query(long long ql,long long qr){
        return qu(0,n-1,0,ql,qr);
    }
};

int main(){
    long long n,q;
    cin>>n>>q;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    SegmentTree* st=new SegmentTree(a);
    for(long long i=0;i<q;i++){
        long long ql,qr;
        cin>>ql>>qr;
        cout<<st->query(ql-1,qr-1)<<"\n";
    }
}