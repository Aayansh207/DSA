#include<iostream>
using namespace std;

int main(){
    int a=1,b=1,n;
    cout<<"\nEnter the N value";
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=0;i<n-2;i++){
        int c;
        c=b;
        b=a+b;
        a=c;
        cout<<a<<endl;
    }
    return 0;
}