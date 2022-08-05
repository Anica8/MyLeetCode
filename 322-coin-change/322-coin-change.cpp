class Solution {
public:
    int coinChange(vector<int>& coins, int amt) {
        int dp[10001]={0};
        
        for(int i=1;i<amt+1;i++)
        {
            dp[i]=10001;
            for(int j=0;j<coins.size();j++){
            if(i>=coins[j])
                {
                    int mine=dp[i-coins[j]];
                    dp[i]=min(mine+1,dp[i]);
                }
            }

        }
        if(dp[amt]==10001) 
            return -1;
        else 
            return dp[amt];
    }
};