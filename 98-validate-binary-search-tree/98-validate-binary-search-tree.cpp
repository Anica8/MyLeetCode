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
    
    bool isBst(TreeNode* root,long long l,long long h){
        if(!root) return true;
        if(root->val <=l || root->val >= h)
            return false;
        
        return isBst(root->left,l, root->val) && isBst(root->right,root->val,h);
    
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return 1;
        long long l=INT_MIN;
        l--;
        long long h=INT_MAX;
        h++;
        return isBst(root,l,h);
    }
};