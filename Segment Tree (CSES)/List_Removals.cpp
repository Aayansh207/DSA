#include<bits/stdc++.h>
using namespace std;

class SegmentTree{
public:
    vector<long long> tree;
    long long n;
    SegmentTree(long long n){
        this->n=n;
        tree.resize(4*n);
        build(0,n-1,0);
    }
    void build(int l, int r, int i) {
        if(l==r){tree[i]=1;return;}
        int mid = l + (r - l) / 2;
        build(l, mid, 2 * i + 1);
        build(mid + 1, r, 2 * i + 2);
        tree[i] = tree[2 * i + 1] + tree[2 * i + 2];
    }
    int find_and_remove(int l, int r, int i, int k) {
        if(l==r){tree[i]=0;return l;}
        int mid=(l+r)/2;
        int left_count=tree[2*i+1];
        int ans;
        if(k<=left_count){
            ans=find_and_remove(l,mid,2*i+1,k);
        }
        else{
            ans=find_and_remove(mid+1,r,2*i+2,k-left_count);
        }
        tree[i]=tree[2*i+1]+tree[2*i+2];
        return ans;
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SegmentTree* st=new SegmentTree(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int original_idx=st->find_and_remove(0,n-1,0,x);
        cout<<a[original_idx]<<(i==n-1 ? "" :" ");
    }
}