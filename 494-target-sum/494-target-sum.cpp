class Solution {
public:
    int count(vector<int> nums, int sum){
        int n=nums.size();
        int dp[n+1][sum+1];
        for(int j=0;j<sum+1;j++)
            dp[0][j]=0;
        for(int i=0;i<n+1;i++)
            dp[i][0]=1;
        
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(j>=nums[i-1])
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int n=nums.size();
        if(n==0) return 0;
        // if(n==1 && abs(nums[0])==abs(target)) return 1;
        // else if(n==1) return 0;
        int s=0;
        for(int i=0;i<n;i++)
            s+=nums[i];
        if(s< abs(target) || (target+s) %2 != 0) return 0;
        int sum=(s+target)/2;
        
        return count(nums,sum);
    }
};