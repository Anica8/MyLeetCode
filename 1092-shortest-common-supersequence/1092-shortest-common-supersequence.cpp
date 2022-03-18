class Solution {
public:
    string shortestCommonSupersequence(string s, string t) {
//         int n=str1.size(),m=str2.size();
//         // int dp[n+1][m+1];
//         vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=m;j++){
//                 if(i==0 || j==0)
//                     dp[i][j]=0;
//             }
//         }
        
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                 if(str1[i-1]==str2[j-1])
//                     dp[i][j]=1+dp[i-1][j-1];
//                 else
//                     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
//         }
        
        
//         int i=n,j=m;
//         string s="";
//         while(i>0 && j>0){
//             if(str1[i]==str2[j]) {
//             s=s+str1[i-1];
//             i--;
//             j--;}
//             else if(dp[i][j-1]>dp[i-1][j]){
                    
//                     s=s+str2[j-1];
//                     j--;
//                 }else
//                 { 
//                      s=s+str1[i-1];
//                         i--;
//                 }
//             }
//         while(i>0){
//             s=s+str1[i-1];
//             i--;
//         }
//         while(j>0){
//             s=s+str2[j-1];
//             j--;
//         }
//         reverse(s.begin(),s.end());
    
//         return s;
        int n=s.size();
        int m=t.size();

        //vector<vector<int>> dp(n, vector<int>(m, -1));
        //return f(n-1, m-1, s, t, dp);
        //vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        int dp[n+1][m+1];

        // for(int j=0; j<=m; j++) dp[0][j]=0;
        // for(int i=0; i<=n; i++) dp[i][0]=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0)
                    dp[i][j]=0;
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s[i-1]==t[j-1]) dp[i][j] = 1+dp[i-1][j-1];

                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }

        //cout<< dp[n][m] << endl;

        //int len = dp[n][m];
        string ans = "";
        int i=n, j=m;

        while(i>0 && j>0){
            if(s[i-1]==t[j-1]){
                ans += s[i-1];
    
                i--;
                j--;
            }
            else if(dp[i-1][j] > dp[i][j-1]){
                ans += s[i-1];
                i--;
            }
            else{
                ans += t[j-1];
                j--; 
            }
        }
        
        while(i>0){
            ans += s[i-1];
            i--;
        }
        while(j>0){
            ans += t[j-1];
            j--;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};