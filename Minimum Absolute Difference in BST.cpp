//530. Minimum Absolute Difference in BST


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
    int getMinimumDifference(TreeNode* root) {
        
        int diff = INT_MAX;
        int prev = -1; 
        stack<TreeNode*> stack;

        while(root || !stack.empty()){
            while(root){
                stack.push(root);
                root = root->left;
            }

            root = stack.top();
            stack.pop();
            if(prev >= 0) diff = min(diff, root->val - prev);

            prev = root->val;
            root = root->right;

        }

        return diff;
    }
};