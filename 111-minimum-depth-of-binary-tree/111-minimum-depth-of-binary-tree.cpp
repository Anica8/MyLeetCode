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
    int solve(TreeNode* root){
        if(root==NULL) return 0;
        int lt=solve(root->left);
        int rt=solve(root->right);
        if(lt==0 || rt==0)
            return 1+max(lt,rt);
        else
        return min(lt,rt)+1;
    }
    int minDepth(TreeNode* root) {
        return solve(root);
    }
};