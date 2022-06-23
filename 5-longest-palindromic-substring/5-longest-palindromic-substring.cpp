class Solution {
public:
    
    string longestPalindrome(string s) {
        int n=s.length();
        bool dp[n][n];
        int a=-1,b=-1;
        
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                if(g==0){
                    dp[i][j]=true;
                }else if(g==1){
                    if(s[i]==s[j])
                        dp[i][j]=true;
                    else
                        dp[i][j]=false;
                }else {
                    if(s[i]==s[j])
                        dp[i][j]=dp[i+1][j-1];
                    else
                        dp[i][j]=false;
                }
                if(dp[i][j])
                {
                    a=i;
                    b=j;
                }
            }
        }
        string ans="";
        for(int i=a;i<=b;i++)
            ans+=s[i];
        
        return ans;
    }
};