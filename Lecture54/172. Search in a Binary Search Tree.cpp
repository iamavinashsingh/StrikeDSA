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
TreeNode* searchBST(TreeNode* root, int val) {
    if(!root){
        return NULL;
    }
    
    // if found
    if(root->val==val)
    return root;

    TreeNode* LeftSide = searchBST(root->left,val);

    if(LeftSide){
        return LeftSide;
    }

    return searchBST(root->right,val);
}