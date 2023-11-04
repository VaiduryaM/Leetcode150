//106. Construct Binary Tree from Inorder and Postorder Traversal


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

    private:
    
    TreeNode* magic(vector<int>& inorder, int inStart, int inEnd, vector<int>& postorder, int pStart, int pEnd, unordered_map<int, int>& mapped){

        if(inStart > inEnd) return nullptr;

        int rootVal = postorder[pEnd];
        int rootFromInOrder = mapped.at(rootVal);
        int leftTreeSize = rootFromInOrder - inStart;

        TreeNode* build = new TreeNode(rootVal);
        build->left = magic(inorder, inStart, rootFromInOrder-1, postorder, pStart, pStart+leftTreeSize-1, mapped);
        build->right = magic(inorder, rootFromInOrder+1, inEnd, postorder,pStart+leftTreeSize, pEnd-1, mapped);


        return build;


    }
public:

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        unordered_map<int, int> mapped;
        for(int i=0; i<inorder.size();++i){
            mapped[inorder[i]] = i;

        }

        return magic(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1, mapped);
        
    }
};