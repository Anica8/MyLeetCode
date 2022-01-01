class Solution {
public:
    double pow(double x,int n){
        if(n==0)
            return 1 ; 
        if(n==1)
            return x ; 
        double ans = pow(x,abs(n/2)) ; 
        ans = ans*ans ; 
        if(n%2 != 0) {
            return x*ans ; 
        }
        else
            return ans ; 
    }
    double myPow(double x, int n) {
        double ans=pow(x,abs(n));
        if(n<0)
            return 1/ans;
        return ans;
    }
};