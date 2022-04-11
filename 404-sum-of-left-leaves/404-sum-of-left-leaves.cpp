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
     int inOrder(TreeNode *root,int &ans){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return root->val;
        int leafleft=inOrder(root->left,ans);
        ans+=leafleft;
        inOrder(root->right,ans);
        return 0;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        inOrder(root,ans);
        return ans;
    }
};