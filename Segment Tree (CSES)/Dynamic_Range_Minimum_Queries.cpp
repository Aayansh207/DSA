#include<bits/stdc++.h>
using namespace std;

class SegmentTree{
public:
    vector<long long> tree;
    int n;
    SegmentTree(vector<long long> &a){
        n=a.size();
        tree.resize(4*n);
        build(a,0,n-1,0);
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
    void up(long long idx,long long key,long long l,long long r,long long i){
        if(l==r){tree[i]=key;return;}
        int mid=(l+r)/2;
        if(idx<=mid){
            up(idx,key,l,mid,2*i+1);
        }
        else{
            up(idx,key,mid+1,r,2*i+2);
        }
        tree[i]=min(tree[2*i+1],tree[2*i+2]);
    }
    void update(long long idx,long long key){
        up(idx,key,0,n-1,0);
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
        long long qt,ql,qr;
        cin>>qt>>ql>>qr;
        if(qt==2){
            cout<<st->query(ql-1,qr-1)<<"\n";
        }
        else if(qt==1){
            st->update(ql-1,qr);
        }
    }
}