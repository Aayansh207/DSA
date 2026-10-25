#include<bits/stdc++.h>
using namespace std;

// Using Loop
template<class T>
int count_loop(T n){
    int c=0;
    while(n>0){
        c++;
        n=int(n/10);
    };
    return c;
};

// Using Optimization
template<class T>
int count_opt(T n){
    return int(log10(n)+1);
};


int main(){
    long long a=12823532535;
    cout<<count_loop(a)<<endl;
    cout<<count_opt(a);
    return 0;
}

