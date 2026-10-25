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

void printll(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* delete_node(Node* head,int k){
    if(head==NULL){return head;}
    else if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main(){
    int arr[8]={12,13,14,14,14,12,16,18};
    Node* head=arrtoll(arr,8);
    head=delete_node(head,1);
    printll(head);
    return 0;
}