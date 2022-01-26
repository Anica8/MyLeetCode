class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        if(n==1) return 0;
        int x=n;
        int mask=0;
        while(x!=0){
            mask=(mask<<1)|1;
            x=x>>1;
        }
        n=~n;
        return n&mask;
    }
};