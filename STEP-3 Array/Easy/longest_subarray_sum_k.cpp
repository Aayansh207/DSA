// for positive
#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    vector<int> abcd={10, 5, 2, 7, 1, 9};
    int i=0,j=0;
    int sum=0;
    int lenmax=0;
    while(j<abcd.size()){
        sum+=abcd[j];
        while(sum>k && i<=j){sum-=abcd[i];i++;}
        if(sum==k){
            lenmax=max(lenmax,j-i+1);
        }
        j++;
    }
    cout<<lenmax;
    return 0;
}