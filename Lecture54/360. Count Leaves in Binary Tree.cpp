struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    int countLeaves(TreeNode* root) {
        // code here
        if(!root){
            return 0;
        }
        
        // leaf node
        if(!root->left&&!root->right){
            return 1;
        }


        return countLeaves(root->left)+countLeaves(root->right);
    }
};