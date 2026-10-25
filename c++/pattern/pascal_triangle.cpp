/*
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
*/

#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int c(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
};

int main(){
    int n=10;
    for (int i = n; i >=1 ; i--)
    {
        for (int j = 0; j < 2*i-2; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <=n-i; j++)
        {
            int number=c(n-i,j);
            if(int(log10(number))==0){
                cout<<"  "<<number<<" ";
            }
            else if(int(log10(number))==1){
                cout<<" "<<number<<" ";
            }
            else if(int(log10(number))==2){
                cout<<number<<" ";
            }
        }
        cout<<endl;
    };
    
    return 0;
}