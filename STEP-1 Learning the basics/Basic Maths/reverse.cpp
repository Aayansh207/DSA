#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int c=0;
    while(n>0){
        c=c*10+n%10;
        n=n/10;
    };
    return c;
};

int main(){
    int n=124891;
    cout<<reverse(n);
    return 0;
}