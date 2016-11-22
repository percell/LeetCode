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
    bool isValidBST(TreeNode* root) {
        vector<int> vv;
        valid(root, vv);
        if(vv.size()<=1) return true;
        for(int i=1; i<vv.size(); i++){
            if(vv[i]<=vv[i-1]) return false;
        }
        return true;
    }
    
    void valid(TreeNode* root, vector<int>& vv){
        if(root==NULL) return;
       
        valid(root->left, vv);
        vv.push_back(root->val);
        valid(root->right, vv);
    }
};
