class Solution {
public:
    int factorial(int n)
    {
        return (n==1 || n==0) ? 1: n * factorial(n - 1);
    }
    int trailingZeroes(int n) {
        int zeros=0;
        int f=5;
        while(n>=f){
            zeros+=floor(n/f);
            f=f*5;
        }
        
        return zeros;
    }
};