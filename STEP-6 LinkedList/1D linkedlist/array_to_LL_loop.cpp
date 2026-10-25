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
    if (n == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* current = head;
    for (int i = 1; i < n; i++) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

int main(){
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = arrtoll(arr, n);
    return 0;
}