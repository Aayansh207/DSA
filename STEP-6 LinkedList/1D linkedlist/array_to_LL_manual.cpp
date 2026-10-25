#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data1){data=data1;next=nullptr;}
        Node(int data1, Node* next1){data=data1;next=next1;}
};

int main(){
    int arr[5]={12,14,16,18,22};
    Node* head=new Node(arr[0]);
    Node* second=new Node(arr[1]);
    Node* third=new Node(arr[2]);

    head->next=second;
    head->next=third;

    cout<<head->data;
    cout<<second->data;
    return 0;
}