#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    char* start = &s[0];
    char* end = &s[s.length() - 1];
    while(start<=end){
        *start=tolower(*start);
        *end=tolower(*end);
        if(!isalnum(*start)){start++;continue;}
        if(!isalnum(*end)){end--;continue;}
        if(*start!=*end){return false;}
        start++;
        end--;}
        return true;
}
int main(){
        cout<<isPalindrome("");
        return 0;
    }