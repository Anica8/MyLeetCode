class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1,sum=0,sub;
        while(n!=0){
            int a=n%10;
            n=n/10;
            mul*=a;
            sum+=a;
        }
        sub=mul-sum;
        return sub;
    }
};