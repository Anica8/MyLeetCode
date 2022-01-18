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
    void inorder(TreeNode* root, vector<int> &as,int l,int h){
        if(root==NULL) return;
        inorder(root->left,as,l,h);
        if(root->val < h && root->val > l)
            as.push_back(root->val);
        inorder(root->right,as,l,h);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> as;
        inorder(root,as,low,high);
        int sum=low+high;
        for(int i=0;i<as.size();i++)
            sum+=as[i];
        return sum;
    }
};