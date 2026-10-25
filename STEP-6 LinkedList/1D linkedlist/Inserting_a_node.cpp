#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data1){data=data1;next=nullptr;}
        Node(int data1, Node* next1){data=data1;next=next1;}
};

void printll(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

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

Node* insertnode(Node* head,int val,int pos){
    if(head==NULL){return head;}
    if(pos==0){Node* temp= new Node(val,head);return temp;}
    Node* mover=head;
    int i=1;
    while(mover && i<pos-1){
        mover=mover->next;
        i++;
    }
    if (mover == nullptr) {
        return head;
    }
    mover->next = new Node(val, mover->next);
    return head;
}

int main(){
    int arr[10]={12,14,15,16,18,21,25,6,24,2};
    Node* head=arrtoll(arr,10);
    head=insertnode(head,199,4);
    printll(head);
    return 0;
}