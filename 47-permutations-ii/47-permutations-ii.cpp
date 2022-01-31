class Solution {
public:
    void permut(set<vector<int>> &sp,vector<int> n,int i){
        if(i>=n.size())
            sp.insert(n);
        for(int j=i;j<n.size();j++){
            swap(n[i],n[j]);
            permut(sp,n,i+1);
            swap(n[i],n[j]);
        }
            
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> sp;
        permut(sp,nums,0);
        for(auto v:sp){
            ans.push_back(v);
        }
        return ans;
    }
};