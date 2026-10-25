#include<bits/stdc++.h>
using namespace std;
// Brute-Force
int HCF(int n,int p){
    int primary=n<p ? n:p;
    int secondary=n+p-primary;
    int counter=primary;
    while(counter>1){
    if(primary%counter==0 && secondary%counter==0) return counter;
    counter--;
    };
};

// optimised
int HCF_opt(int n, int p){
    return p==0 ? n:HCF_opt(p,n%p);
};

int main(){
    int a=20;
    int b=15;
    cout<<HCF_opt(a,b);
    return 0;
}