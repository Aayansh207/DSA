#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={2,4,6,8,7,55,6,67,23,65};
    int largest=0;
    for(int x:arr){
        if(x>largest){largest=x;}
    }
    cout<<largest;
    return 0;
}