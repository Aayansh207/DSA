#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int co=n;
    int n2=0;
    while(n>0){
        n2=n2*10;
        n2+=n%10;
        n/=10;
    }
    if(co==n2){cout<<"The number is a palindrome";}
    else{cout<<"The number is not a palindrome";}
    return 0;
}