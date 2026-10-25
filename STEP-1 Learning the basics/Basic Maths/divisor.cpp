#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=36;
    vector<int> ab;
    int bc=sqrt(a);
    for(int i=1;i<=bc;i++){
        if(a%i==0){
            ab.push_back(i);
            if(i==a/i){break;};
            ab.push_back(a/i);
        };
    };
    sort(ab.begin(),ab.end());
    for(int i:ab){cout<<i<<endl;};

    return 0;
}