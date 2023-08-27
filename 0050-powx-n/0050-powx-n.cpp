class Solution {
public:
    double solve(double x, int n){
        if(n==0)    return 1;
        return x*myPow(x,n-1);
    }
    
    double myPow(double x, int n) {
        if(n<0){
            n = abs(n);
            x = 1/x;
        }
        if(n%2==0)  return solve(x*x,n/2);
        return solve(x,n);
    }
};