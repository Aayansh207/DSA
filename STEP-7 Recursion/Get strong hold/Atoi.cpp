#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long n=0;
    bool neg=0;
    bool started=0;
    void Atoi(string s){
        if (s.empty()) return;
        char c=s[0];
        if (!started && c==' ') {Atoi(s.substr(1));return;}
        if (!started && (c=='-'||c=='+')){
            neg=(c=='-');
            started=true;
            Atoi(s.substr(1));
            return;
        }
        if (c >= '0' && c <= '9') {
            started = true;
            n=n*10+(c-'0');
            if(!neg && n>INT_MAX){n=INT_MAX;}
            if(neg && -1*n<INT_MIN){n=(long long)INT_MIN*-1;}
            Atoi(s.substr(1));
            return;
        }
        return;
    }
    int myAtoi(string s) {
        Atoi(s);
        n=neg ? n*-1:n;
        return n;
    }
};

int main(){
    
    return 0;
}