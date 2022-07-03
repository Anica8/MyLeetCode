class Solution {
public:
    int titleToNumber(string col) {
        int sum=0;
        if(col.length()==1)
        {
            int ch=col[0]-'A';
            return ch+1;
        }
        int n=col.length();
        
        int i=0;
        while(n-1>=0){
            int ch =col[n-1]-'A'+1;
            int p=pow(26,i);
            sum+=p*ch;
            i++;
            n--;
        }
        return sum;
    }
};