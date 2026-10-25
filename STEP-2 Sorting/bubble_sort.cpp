#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);}
        }
    }
}

int main(){
    int arr[4]={4,2,7,5};
    bubble_sort(arr,4);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}