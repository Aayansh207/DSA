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

Node* deletek(Node* head, int k) {
    if (head == nullptr) return nullptr;
    if (k == 1) {
        Node* temp = head;
        head = head->next;
        if (head != nullptr) head->prev = nullptr;
        delete temp;
        return head;
    }
    Node* mover = head;
    for (int i = 1; i < k && mover != nullptr; i++) {
        mover = mover->next;
    }
    if (mover == nullptr) return head;
    if (mover->prev != nullptr) mover->prev->next = mover->next;
    if (mover->next != nullptr) mover->next->prev = mover->prev;

    delete mover;
    return head;
}

int main(){
    
    return 0;
}