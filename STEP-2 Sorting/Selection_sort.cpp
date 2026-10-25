#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> abcd={7,3,9,4};
    for (int i = 0; i <= abcd.size()-2; i++)
    {
        int ind=i;
        for(int x=(i+1);x<=abcd.size()-1;x++){
            if(abcd[x]<abcd[ind]){ind=x;}
        }
        swap(abcd[i],abcd[ind]);
    }
    
    for (int c:abcd){
        cout<<c<<" ";
    }
    return 0;
}