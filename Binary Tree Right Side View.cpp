//199. Binary Tree Right Side View

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
    vector<int> rightSideView(TreeNode* root) {

        vector<int> ret;
        if(root == nullptr) return ret;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int s = q.size();
            
            for(int i = 0; i<s; i++){
                TreeNode* node = q.front();
                q.pop();
                if(i==s-1) ret.push_back(node->val);
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);                
            }
        }

        return ret;



        
    }


};