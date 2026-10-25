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

Node* delete_head(Node* head){
    if(head==NULL){return head;}
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

void printll(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int arr[8]={12,13,14,14,14,12,16,18};
    Node* head=arrtoll(arr,8);
    head=delete_head(head);
    printll(head);
    return 0;
}