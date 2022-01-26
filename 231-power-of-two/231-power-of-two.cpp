class Solution {
public:
    int countPwer(int n){
        int count=0;
        while(n!=0){
            if(n&1==1)
                count+=1;
            n=n>>1;
        }
        return count;
    }
    bool isPowerOfTwo(int n) {
        if(n<0)
            return false;
        if(countPwer(n)==1)
            return true;
        else 
            return false;
    }
};