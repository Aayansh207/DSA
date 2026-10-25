#include<bits/stdc++.h>
using namespace std;

int dig(int x){
    return int(log10(x)+1);};

bool armstrong(int x){
    int ab=dig(x);
    int n=x;
    int cnt=0;
    while(n>0){
        int abcd=int(pow(n%10,ab));
        cnt+=abcd;
        n=n/10;
    };
    return cnt==x;
};

int main(){
    cout<<armstrong(153);
    return 0;
}