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
    TreeNode* cTree(vector<int> preorder,vector<int> inorder,int is,int ie,int *preInd){
        if(is>ie) return NULL;
        int inInd;
        TreeNode *head= new TreeNode(preorder[(*preInd)]);
        (*preInd)++;
        if(is==ie) return head;
        for(int i=is;i<=ie;i++){
            if(inorder[i]==head->val)
            {inInd=i;
            break;}
        }
        head->left=cTree(preorder,inorder,is,inInd-1,preInd);
        head->right=cTree(preorder,inorder,inInd+1,ie,preInd);
        return head;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preInd=0;
        return cTree(preorder,inorder,0,preorder.size()-1,&preInd);
    }
};