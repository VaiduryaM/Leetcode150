//101. Symmetric Tree


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
    /*
    //doesnt work
    TreeNode* invert(TreeNode * root){
        if(root == nullptr) return nullptr;

        else{
            TreeNode* temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        return root;

    }
    */

    bool isSymmetric(TreeNode* a, TreeNode* b){

        //1. both empty
        if(a == nullptr && b == nullptr) return true;
        //2. both non-empty -> compare them
        else if(a != NULL && b !=NULL){
            return(a->val == b-> val && isSymmetric(a->left, b->right) && isSymmetric(a->right, b->left));
        }
        //3. one empty, one not -> false
        else return false;

    }
    bool isSymmetric(TreeNode* root) {

        return isSymmetric(root, root);

        /*
        //doesnt work
        if(root == nullptr) return 1;

        TreeNode* mirror = invert(root);
        if(mirror == NULL && root == NULL) return 1;
        else if(mirror != NULL && root !=NULL){
            return(mirror->val == root-> val && isSymmetric(mirror->left, root) &&isSymmetric())
        }
        */
        
        
    }
};