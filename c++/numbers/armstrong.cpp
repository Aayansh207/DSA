#include<bits/stdc++.h>
using namespace std;

int digit(int n){
    int answer=0;
    while(n>0){
        answer+=1;
        n/=10;
    }
    return answer;
}
int main(){
    int n1;cin>>n1;
    int co=n1;
    int n=digit(n1);
    int sum1=0;
    for(int i=0;i<n;i++){
        int dig=n1%10;
        n1/=10;
        int tem=1;
        for(int j=0;j<n;j++){
            tem*=dig;
        }
        sum1+=tem;
    }
    if(sum1==co){cout<<"Armstrong number";}
    else{cout<<"Not an Armstrong number";}
    return 0;
}