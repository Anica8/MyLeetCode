/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inO(TreeNode* root,unordered_map<int,int> &mp){
        if(!root) return;
        
        mp[root->val]++;
        inO(root->left,mp);
        inO(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> mp;
        inO(root,mp);
        vector<int> ans;
        int mx=INT_MIN;
        for(auto it:mp)
        {
            mx=max(mx,it.second);
        }
        
        for(auto it:mp){
            if(mx==it.second)
                ans.push_back(it.first);
        }
        return ans;
    }
};