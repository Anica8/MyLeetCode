class Solution {
public:
    int dp[105];
    int houseRob(vector<int> n,int ind){
        if(ind==0 || ind==1) return n[ind];
        if(ind<0) return 0;
        if(dp[ind]) return dp[ind];
        return dp[ind]=max(houseRob(n,ind-2),houseRob(n,ind-3))+n[ind];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n==1) return nums[0];
        
        int dp[n+1];
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[n-1];
    }
};