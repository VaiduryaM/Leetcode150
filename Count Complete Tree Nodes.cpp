//222. Count Complete Tree Nodes

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
    int countNodes(TreeNode* root) {
        
        //int c = 0;
        if(root == nullptr) return 0;

        //if(root->val && root->left == nullptr && root->right == nullptr)  c++;
        
        return 1+ countNodes(root->left)+countNodes(root->right);
        
    }
};