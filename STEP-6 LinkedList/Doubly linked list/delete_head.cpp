#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int data1){data=data1;next=nullptr;prev=nullptr;}
        Node(int data1,Node* prev1){data=data1;next=nullptr,prev=prev1;}
        Node(int data1, Node* next1, Node* prev1){data=data1;next=next1;prev=prev1;}

};

Node* arrtodll(int arr[],int n){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<n;i++){
        mover->next=new Node(arr[i],mover);
        mover=mover->next;
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

Node* delete_head(Node* head){
    if(head==nullptr) return head;
    if(head->next==nullptr) return nullptr;
    Node* new_head=head->next;
    new_head->prev=nullptr;
    head->next=nullptr;
    delete head;
    return new_head;
}

int main(){
    int arr[10]={12,325235,2,3,23,423,4,54,23,35}; 
    Node* head=arrtodll(arr,10);
    head=delete_head(head);
    printll(head);
    return 0;
}