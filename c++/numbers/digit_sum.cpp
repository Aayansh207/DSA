#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int sum1=0;
    int sum2=0;
    while(n>0){
        sum2++;
        sum1+=n%10;
        n=n/10;
    }
    cout<<"Total Sum : "<<sum1<<endl;
    cout<<"Total digit : "<<sum2;
    return 0;
}