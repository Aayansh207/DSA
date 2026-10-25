#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b=5;
    cout<<&a<<endl;
    cout<<&b<<"\n"<<endl;
    int marks[]={1,22,33,44,55,66,77,88,99};
    int* p=marks;
    cout<<p<<endl;
    cout<<p+1<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    return 0;
}