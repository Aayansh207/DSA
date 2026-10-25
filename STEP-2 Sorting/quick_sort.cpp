#include<bits/stdc++.h>
using namespace std;

int part(int arr[],int low, int high){
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=arr[low] && i<=high-1){i++;}
        while(arr[j]>arr[low] && j>=low+1){j--;}
        if(i<j){swap(arr[i],arr[j]);}
    }
    swap(arr[low],arr[j]);
    return j;
}

void quick_sort(int arr[],int low,int high){
    if(low>=high){return;}
    int ab=part(arr,low,high);
    quick_sort(arr,low,ab-1);
    quick_sort(arr,ab+1,high);
}

int main(){
    int arr[9]={4,3,6,1,8,9,4,2,5};
    quick_sort(arr,0,8);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}