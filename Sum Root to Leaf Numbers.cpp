//129. Sum Root to Leaf Numbers


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

    void pathNumbers(TreeNode* root, vector<int> path, vector<int> &indiPath){

        if(root==nullptr) return;
        path.push_back(root->val);

        if(root->left == nullptr && root->right == nullptr){
          string a;
          for(int i:path){
              a+=to_string(i);
          }
            indiPath.push_back(stoi(a));
            path.clear();
            
        }
        else{
            pathNumbers(root->left,path,indiPath);
            pathNumbers(root->right,path,indiPath);
        }


    }
    int sumNumbers(TreeNode* root) {        

        if(root==nullptr) return 0;
        
        vector<int> path, pathSum;
        pathNumbers(root, path, pathSum);

        int ret=0;
        for(int i:pathSum){
            ret += i;
        }

        return ret;
        
    }
};