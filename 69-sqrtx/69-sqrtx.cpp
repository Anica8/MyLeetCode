class Solution {
public:
    long long int sqt(int x){
        long long int s=0,e=x;
        long long int ans;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid < x)
            {
                ans=mid;
                s=mid+1;}
            else
                e=mid-1;
        }
        return ans;
    }
    int mySqrt(int x) {
        int ans=sqt(x);
        return ans;
    }
};