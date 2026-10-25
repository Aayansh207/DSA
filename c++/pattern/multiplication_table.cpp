//  1  2  3  4  5 
//  2  4  6  8 10
//  3  6  9 12 15
//  4  8 12 16 20
//  5 10 15 20 25
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i*j<=9){cout<<" "<<i*j<<' ';}
            else if(i*j<=99){cout<<i*j<<' ';}
        }
        cout<<endl;
    }
    return 0;
}