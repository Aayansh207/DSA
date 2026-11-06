#include<bits/stdc++.h>
using namespace std;

class SegmentTree{
public:
    vector<long long> tree;
    long long n;
    SegmentTree(long long n){
        this->n=n;
        tree.resize(4*n);
    }
    long long qu(long long l,long long r,long long i,long long ql,long long qr){
        if(ql>r || qr<l){return 0;}
        if(ql<=l && qr>=r){return tree[i];}
        long long mid=(l+r)/2;
        return qu(l,mid,2*i+1,ql,qr)+qu(mid+1,r,2*i+2,ql,qr);
    }
    long long query(long long ql,long long qr){
        return qu(0,n-1,0,ql,qr);
    }
    void up(long long idx,long long key,long long l,long long r,long long i){
        if(l==r){tree[i]+=key;return;}
        long long mid=(l+r)/2;
        if(idx<=mid){
            up(idx,key,l,mid,2*i+1);
        }
        else{
            up(idx,key,mid+1,r,2*i+2);
        }
        tree[i]=tree[2*i+1]+tree[2*i+2];
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
    SegmentTree* st=new SegmentTree(n+1);
    for(long long i=0;i<q;i++){
        long long qt;
        cin>>qt;
        if(qt==1){
            long long l,r,u;
            cin>>l>>r>>u;
            st->update(l-1,u);
            st->update(r,-u);
        }
        else{
            long long k;
            cin>>k;
            long long val=st->query(0,k-1);
            cout<<a[k-1]+val<<"\n";
        }
    }
}