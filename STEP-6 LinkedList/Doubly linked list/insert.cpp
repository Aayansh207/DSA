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

Node* insertk(Node* head, int k, int data){
    if(head==nullptr){return new Node(data);}
    if(k==1){
        Node* temp=new Node(data);
        temp->next=head;
        head->prev=temp;
        return temp;
    }
    Node* mover=head;
    for(int i=1;i<k-1;i++){
        mover=mover->next;
    }
    if (mover->next == nullptr) {
        Node* temp = new Node(data);
        mover->next = temp;
        temp->prev = mover;
        return head;
    }

    Node* temp=new Node(data,mover->next,mover);
    mover->next->prev=temp;
    mover->next=temp;
    return head;
}

int main(){
        
        return 0;
    }