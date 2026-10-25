class Solution {
public:
    long long fastpow(long long x,long long n){
        if(n==0)return 1.0;
        long long half=fastpow(x,n/2);
        if(n%2==0) return (long long)(half*half)%1000000007;
        else return ((long long)(half*half)%1000000007*x)%1000000007;
    }
    int countGoodNumbers(long long n) {
        long long count=1;
        if(n%2!=0){n--;count=5;}
        count*=fastpow(4,n/2);
        count*=fastpow(5,n/2);
        return count%1000000007;
    }
};