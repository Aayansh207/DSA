#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){swap(arr[j],arr[j-1]);}
        }
    }
}

int main(){
    int arr[4]={4,2,7,5};
    insertion_sort(arr,4);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}