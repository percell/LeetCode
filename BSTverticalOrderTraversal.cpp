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
    
    vector<vector<int>> verticalOrder(TreeNode* root) {
        vector<vector<int>> sol;
        if(root==NULL) return sol;
        map<int, vector<int>>mm;
        queue<pair<TreeNode*, int>> q;
        pair<TreeNode*, int> rootPair(root, 0);
        q.push(rootPair);
        
        while(!q.empty()){
            pair<TreeNode*, int> tmp = q.front();
            q.pop();
            mm[tmp.second].push_back(tmp.first->val);
            if((tmp.first)->left != NULL){
                pair<TreeNode*, int>leftChild((tmp.first)->left, (tmp.second)-1);
                q.push(leftChild);
            }
            if((tmp.first)->right != NULL){
                pair<TreeNode*, int>rightChild((tmp.first)->right, (tmp.second)+1);
                q.push(rightChild);
            }
        }
       
        for(auto it=mm.begin(); it!=mm.end(); it++){
            vector<int> tmp = it->second;
            sol.push_back(tmp);
        }
        return sol;
    }
    
};
