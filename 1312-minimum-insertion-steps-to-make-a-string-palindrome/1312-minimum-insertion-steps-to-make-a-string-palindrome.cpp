class Solution {
public:
    int lcs(string s1,string s2){
        int n=s1.length(),m=s2.length();
        int dp[n+1][m+1];
        for( int i=0;i<=n;i++) dp[i][0]=0;
        for( int j=0;j<=m;j++) dp[0][j]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
    int minInsertions(string s) {
        string str="";
        int n=s.size();
        for (int i=n-1;i>=0;i--){
            str+=s[i];
        }
        int ans=lcs(s,str);
        return n-ans;
    }
};