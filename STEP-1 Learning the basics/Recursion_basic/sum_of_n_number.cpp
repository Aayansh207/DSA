#include<bits/stdc++.h>
using namespace std;

int sum(int i){
    if(i==0) return 0;
    return i + sum(i-1);
}

int main(){
    cout<<sum(15);
    return 0;
}