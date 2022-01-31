class Solution {
public:
    void permute(vector<int> sp,vector<vector<int>> &ans,int i){
        if(i>=sp.size())
            ans.push_back(sp);
        for(int j=i;j<sp.size();j++){
            swap(sp[i],sp[j]);
            permute(sp,ans,i+1);
            swap(sp[i],sp[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        permute(nums,ans,0);
        return ans;
    }
};