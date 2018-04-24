/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sum=0;
    void cal(TreeNode* root)
    {
        if(!root)
            return;
        if(root->right)
            cal(root->right);
        
        root->val+=sum;
        sum=root->val;
        
        if(root->left)
            cal(root->left);
    }
    
    TreeNode* convertBST(TreeNode* root) {
        cal(root);        
        return root;
    }
};
