/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<" ";
        };
        int s=1;
        for(int j=1;j<=(2*i-1);j++){
            cout<<s;
            if(j>=i) s--;
            else s++;
            };
        cout<<endl;
    };
    return 0;
}