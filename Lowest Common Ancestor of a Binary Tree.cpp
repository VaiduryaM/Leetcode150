//236. Lowest Common Ancestor of a Binary Tree

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if(root == nullptr || root == p || root == q) return root;

        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);

        if(left != nullptr && right != nullptr) return root;
        return left == nullptr? right : left;
        /*
        //you are not handling nullptr
        if(root == nullptr) return root;
        
        if(root->val > max(p->val, q->val)) return lowestCommonAncestor(root->left, p,q);
        if(root->val < min(p->val, q->val)) return lowestCommonAncestor(root->right, p,q);

        return root;
        */
    }
};