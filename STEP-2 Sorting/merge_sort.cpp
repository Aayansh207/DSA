#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid, int end){
    int abcd[end-start+1];
    int j=0;
    int left=start;
    int right=mid+1;
    while(left<=mid && right<=end){
        if(arr[left]<arr[right]){abcd[j]=arr[left];left++;}
        else{abcd[j]=arr[right];right++;}
        j++;
    }
    while (left <= mid) {
        abcd[j++] = arr[left++];
    }
    while (right <= end) {
        abcd[j++] = arr[right++];
    }
    for(int i=start;i<j;i++){
        arr[start+i]=abcd[i];
    }
}

void merge_sort(int arr[],int start,int end){
    if(start>=end){return;}
    int mid=(start+end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);

}

int main(){
    int arr[4]={4,2,7,5};
    merge_sort(arr,0,3);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}