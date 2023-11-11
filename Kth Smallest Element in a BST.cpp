//230. Kth Smallest Element in a BST

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
    int kthSmallest(TreeNode* root, int k) {

        /*
        //solution 1
        vector<int> ele;
        stack<TreeNode*> stack;

        while(root || !stack.empty()){
            while(root){
                stack.push(root);
                root = root->left;
            }

            root = stack.top();
            stack.pop();

            ele.push_back(root->val);
            root = root->right;
        }

        return ele.at(k-1);
        */

        //solution 2 - optimized
        stack<TreeNode*> stack;

        while(root){
            stack.push(root);
            root = root->left;
        }

        for(int i=0; i<k-1; i++){
            root = stack.top();
            stack.pop();

            root = root->right;
            while(root){
                stack.push(root);
                root = root->left;
            }
        }

        return stack.top()->val;
    }
};