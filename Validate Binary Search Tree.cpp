//98. Validate Binary Search Tree


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

    bool isPossible(TreeNode* root, long long l, long long r){
        if(root == nullptr) return true;

        if(root->val < r && root->val > l) return isPossible(root->left,l,root->val) && isPossible(root->right, root->val, r);
        else return false; 
    }
    bool isValidBST(TreeNode* root) {

        //optimized
        long long int min = -10e11, max = 10e11;

        return isPossible(root, min, max);

        /*
        //my sol
        stack<TreeNode*> stack;
        TreeNode* prev = nullptr;

        while(root || !stack.empty()){
            while(root){
                stack.push(root);
                root = root->left;
            }

            root = stack.top();
            stack.pop();

            if(prev && root->val <= prev->val) return false;
            prev = root;

            root = root->right;
        }

        return true;
        */
        
    }
};