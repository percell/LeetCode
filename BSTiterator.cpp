/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode*> ss;
    BSTIterator(TreeNode *root) {
        while(root != NULL){
            ss.push(root);
            root = root->left;
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return (!ss.empty());
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* tmp = ss.top();
        ss.pop();
        
            TreeNode* right = tmp->right;
            while(right!=NULL){
                ss.push(right);
                right = right->left;
            }
      
        return tmp->val;
    }
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
