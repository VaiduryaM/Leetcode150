//114. Flatten Binary Tree to Linked List


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
    void flatten(TreeNode* root) {

        if(root == nullptr) return;

        flatten(root->left);
        flatten(root->right);


        //left node is always nullptr and right should have next node

        TreeNode* left = root->left;
        TreeNode* right = root->right;

        root->left = nullptr;
        root->right = left;

        //to connect inplace of right subtree with right nodes
        TreeNode* rightest = root;
        while(rightest->right)
                rightest = rightest->right;
        
        rightest->right = right;
    
        
    }
};