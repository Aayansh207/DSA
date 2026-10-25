//        _1_
//      _2___3_
//    _4___5___6_
//  _7___8___9___10
//_11__12__13__14__15
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int co=1;
    for(int i=1;i<=n;i++){
        // int cp=;
        for(int j=0;j<(n*4-1+i-1-i*3);j++){cout<<" ";}
        // cp-=2;
        for(int j=1;j<=i;j++){
            if(co<=9){cout<<" "<<co<<" ";}
            else if(co<=99){cout<<" "<<co;}
            else if(co<=999){cout<<co;}
            co++;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}