class Solution {
public:
    bool subset(vector<int> nums,int sum){
        bool dp[nums.size()+1][sum+1];
        for(int i=0;i<sum+1;i++)
            dp[0][i]=false;
        for(int i=0;i<nums.size()+1;i++)
            dp[i][0]=true;
        dp[0][0]=true;
        for(int i=1;i<nums.size()+1;i++){
            for(int j=1;j<sum+1;j++){
                if(nums[i-1]<=j)
                    dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[nums.size()][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        if(sum%2!=0) 
            return false;
        else 
            return subset(nums,sum/2);
    }
};