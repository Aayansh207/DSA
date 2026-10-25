#include<bits/stdc++.h>
using namespace std;

map<int,int> pre;

void prepare(int arr[],int n){
    for(int i=0;i<n;i++){
        pre[arr[i]]++;
    }
}

int co(int a){
    if(pre.count(a)){return pre[a];}
    else{return 0;}
}

int main(){
    int ab=10;
    int arr[ab]={1,4,8,3,6,1,8,5,9,3};
    prepare(arr,ab);
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int ab;
        cin>>ab;
        cout<<ab<<" exists "<<co(ab)<<" times"<<endl;
    }
    
    return 0;
}