#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> abcd={7,9,10,1,2,4,5};
    int start=0;int end=abcd.size()-1;
    while(start<end){
        int mid=(start+end)/2;
        if(abcd[mid]>abcd[end]){start=mid+1;}
        else{end=mid;}
    }
    cout<<"The number of rotations is : "<<start;
    return 0;
}