class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        vector<int> ans;
        int dp[nums.size()];
        dp[0]=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                dp[i]=dp[i-1]+1;
            }else {
                dp[i]=1;
            }
        }
        
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
            maxi=max(maxi,dp[i]);
        
        return maxi;
    }
};