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
    TreeNode* buildBST(vector<int>&postorder, int &index, int minValue, int maxValue){
         
        if(index<0 || postorder[index] < minValue || postorder[index] > maxValue ){
            return NULL;
        }


        TreeNode* root = new TreeNode(postorder[index]);
        index--;

        root->right = buildBST(postorder,index,root->val,maxValue);
        root->left = buildBST(postorder,index,minValue, root->val);

        return root;

    }

    TreeNode* bstFromPostorder(vector<int>& postorder) {
        // Your code here
        int index = postorder.size()-1;
        return buildBST(postorder,index,INT_MIN,INT_MAX);
    }
};