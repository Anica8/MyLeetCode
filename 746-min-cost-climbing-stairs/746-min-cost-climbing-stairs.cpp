class Solution {
public:
    int dp[1009];
    int mincost(vector<int> c,int ind){
        if(ind==0 || ind==1) return c[ind];
        if(dp[ind]) return dp[ind];
        return dp[ind]=min(mincost(c,ind-1),mincost(c,ind-2))+c[ind];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(mincost(cost,cost.size()-1),mincost(cost,cost.size()-2));
    }
};