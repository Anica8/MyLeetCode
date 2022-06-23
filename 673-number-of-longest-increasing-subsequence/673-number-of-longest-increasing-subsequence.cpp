class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        vector<int> lis(n,1);
        vector<int> count(n,1);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i] && lis[i]<lis[j]+1)
                {
                    lis[i]=1+lis[j];
                    count[i]=count[j];
                }else if(lis[i]==lis[j]+1){
                    count[i]+=count[j];
                }
        }
    }
        
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
            maxi=max(maxi,lis[i]);
        
        int c=0;
        for(int i=0;i<n;i++){
            if(maxi==lis[i])
                c+=count[i];
        }
        return c;
}
};