#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data1){data=data1;next=nullptr;}
        Node(int data1, Node* next1){data=data1;next=next1;}
};
Node* arrtoll(int arr[],int n){
    if(n==0){return nullptr;}
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<n;i++){
        temp->next=new Node(arr[i]);
        temp=temp->next;
    }
    return head;
}
int main(){
    int arr[5]={12,16,18,19,21};
    // cout<<arrtoll(arr,5)->data;
    Node* temp=arrtoll(arr,5);
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}