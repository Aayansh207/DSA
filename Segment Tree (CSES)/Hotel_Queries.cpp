#include<bits/stdc++.h>
using namespace std;

class SegmentTree{
public:
    vector<long long> tree;
    int n;
    SegmentTree(vector<int> &a){
        n=a.size();
        tree.resize(4*n);
        build(0,n-1,0,a);
    }

    void build(int l,int r,int i,vector<int> &a){
        if(l==r){tree[i]=a[l];return;}
        int mid=(l+r)/2;
        build(l,mid,2*i+1,a);
        build(mid+1,r,2*i+2,a);
        tree[i]=max(tree[2*i+1],tree[2*i+2]);
    }

    int qu(int q,int l,int r,int i){
        if(tree[i]<q){return -1;}
        if(l==r){return l;}
        int mid=(l+r)/2;
        int left=qu(q,l,mid,2*i+1);
        if(left!=-1){
            return left;
        }
        int right=qu(q,mid+1,r,2*i+2);
        return right;
    }

    void up(int idx,int key,int l,int r,int i){
        if(l==r){tree[i]+=key;return;}
        int mid=(l+r)/2;
        if(idx<=mid){
            up(idx,key,l,mid,2*i+1);
        }
        else{
            up(idx,key,mid+1,r,2*i+2);
        }
        tree[i]=max(tree[2*i+1],tree[2*i+2]);
    }
};

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SegmentTree* st=new SegmentTree(a);
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        int val=st->qu(x,0,n-1,0);
        if(val!=-1)st->up(val,-x,0,n-1,0);
        // for(int j=0;j<4*n;j++){cout<<st->tree[j]<<' ';}
        // cout<<"\n";
        cout<<val+1<<" ";
    }
}