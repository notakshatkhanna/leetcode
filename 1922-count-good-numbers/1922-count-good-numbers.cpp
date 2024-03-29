class Solution {
public:
    int MOD = 1e9 + 7;
    long long f(long long i, long long n){
        if(n==0)    return 1;
        long long e = (i*i)%MOD;
        if(n%2==1)  return (i*f(e,n/2))%MOD;
        return f(e,n/2)%MOD;
    }
    
    int countGoodNumbers(long long n) {
        if(n%2==1)  return (5*f(20,n/2))%MOD;
        return f(20,n/2)%MOD;
    }
};