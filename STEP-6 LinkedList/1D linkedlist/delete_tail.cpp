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

void delete_tail(Node* head){
    if(head==nullptr){return;}
    if(head->next==nullptr){
        delete head;
        head=nullptr;
        return;
    }
    Node* temp=head;
    while(temp->next->next){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
};

int main(){
    int arr[8]={12,13,14,14,14,12,16,18};
    Node* head=arrtoll(arr,8);
    delete_tail(head);
    printll(head);
    return 0;
}