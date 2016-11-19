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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if(root==NULL) return paths;
        string pat;
        pat =(to_string(root->val));
        dfs(root, paths, pat);
        return paths;
    }
    
   void dfs(TreeNode* root, vector<string>& paths, string pat){
       if(root->left==NULL && root->right==NULL){
           paths.push_back(pat);
           return;
       }
       if(root->left!=NULL){
      //     pat += "->" + to_string(root->left->val);
           dfs(root->left, paths, pat+"->" + to_string(root->left->val));
       }
        if(root->right!=NULL){
     //      pat += "->" + to_string(root->right->val);
           dfs(root->right, paths, pat+"->" + to_string(root->right->val));
       }
   }
};
