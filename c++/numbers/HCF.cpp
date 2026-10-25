#include<bits/stdc++.h>
using namespace std;

int HCF(int a,int b){
    if(b<=0){return a;}
    return HCF(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<HCF(a,b);
    return 0;
}