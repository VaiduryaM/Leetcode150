//104. Maximum Depth of Binary Tree


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
    int maxDepth(TreeNode* root) {

        
        //Solution 1
        if(root == nullptr) return 0;
        else return 1+max(maxDepth(root->left), maxDepth(root->right));
        

        /*
        //Solution 2

        if(root == nullptr) return 0;

        else{
            int lNode = maxDepth(root->left);
            int rNode = maxDepth(root->right);

            if(lNode > rNode) return 1+lNode;
            else return 1+rNode;
        }
        */
    }
};