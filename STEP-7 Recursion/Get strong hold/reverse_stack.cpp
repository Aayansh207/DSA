#include<bits/stdc++.h>
using namespace std;
void insertlast(stack<int> &s,int temp){
    if(s.empty()){s.push(temp); return;}
    int temp2=s.top();
    s.pop();
    insertlast(s,temp);
    s.push(temp2);
}

void reverseStack(stack<int> &s){
    if(s.empty()){return;}
    int temp=s.top();
    s.pop();
    reverseStack(s);
    insertlast(s,temp);
}

int main() {
    stack<int> s;
    s.push(4);
    s.push(1);
    s.push(3);
    s.push(2);
    reverseStack(s);
    cout<<"reversed stack: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}