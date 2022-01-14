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
    TreeNode* cTree(vector<int> postorder,vector<int> inorder,int is,int ie,int *postInd){
        if(is>ie) return NULL;
        int inInd;
        TreeNode *head= new TreeNode(postorder[(*postInd)]);
        (*postInd)--;
        if(is==ie) return head;
        for(int i=is;i<=ie;i++){
            if(inorder[i]==head->val)
            {inInd=i;
            break;}
        }
        head->right=cTree(postorder,inorder,inInd+1,ie,postInd);
        head->left=cTree(postorder,inorder,is,inInd-1,postInd);
        
        return head;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postInd=inorder.size()-1;
        return cTree(postorder,inorder,0,postorder.size()-1,&postInd);
    }
};