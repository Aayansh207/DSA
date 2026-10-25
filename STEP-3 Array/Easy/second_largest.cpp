#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={2,4,6,8,7,5,6,67,23,64};
    int largest=0;
    int second=0;
    for(int x:arr){
        if(x>largest){second=largest;largest=x;}
        if(x<largest && x>second){second=x;}
    }
    cout<<second;
    return 0;
}