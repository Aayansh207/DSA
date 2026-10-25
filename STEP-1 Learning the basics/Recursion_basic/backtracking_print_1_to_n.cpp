#include<bits/stdc++.h>
using namespace std;

void rep(int i=0){
    if(i<1) return;
    rep(i-1);
    cout<<i<<"\n";    
}

int main(){
    rep(5);
    return 0;
}