#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node* prev;
        Node* next;
        int val;
        Node(Node* pre,Node* nex, int val){prev=pre;next=nex;val=val;}
        Node(int val){prev=nullptr,next=nullptr,val=val;}
};

Node* arrtodll(int arr[], int n){
    Node* Head=new Node(arr[0]);
    Node* mover=Head;
    for(int i=1;i<n;i++){
        mover->next=new Node(arr[i]);
        mover->next->prev=mover;
        mover=mover->next;
    }
    return Head;
}

void printll(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

Node* deletetail(Node* head){
    if(head==nullptr){return head;}
    if(head->next==nullptr){delete head;return nullptr;}
    Node* mover=head;
    while(mover->next){
        mover=mover->next;
    }
    mover->prev->next=nullptr;
    delete mover;
    return head;
}

int main(){
    
    return 0;
}