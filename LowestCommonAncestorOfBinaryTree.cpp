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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q || root==NULL) return root;
        TreeNode* p1 = lowestCommonAncestor(root->left, p, q);
        TreeNode* p2 = lowestCommonAncestor(root->right, p, q);
        if(p1!=NULL&&p2!=NULL) return root;
        return p1==NULL ? p2:p1;
    }
};
