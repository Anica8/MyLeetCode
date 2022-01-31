class Solution {
public:
 
    void sub(vector<int> nums,vector<int> sp,int i,vector<vector<int>> &ans){
        if(i>=nums.size())
        {
            ans.push_back(sp);
            return;
        }
            
        sub(nums,sp,i+1,ans);
        int element=nums[i];
        sp.push_back(element);
        sub(nums,sp,i+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sp;
        int ind=0;
        sub(nums,sp,ind,ans);
        return ans;
    }
};