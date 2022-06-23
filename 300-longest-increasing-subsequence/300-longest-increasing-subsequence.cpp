class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int dp[n+1];
        int omax=INT_MIN;
        
        for(int i=0;i<n;i++){
            int maxi=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    maxi=max(maxi,dp[j]);
                }
            }
            dp[i]=maxi+1;
            omax=max(omax,dp[i]);
        }
        return omax;
    }
};