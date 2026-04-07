/*
* struct TreeNode {
*    int val;
*    TreeNode* left;
*    TreeNode* right;
*    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
* };
*/

class Solution {
  public:
    vector<int> postorderTraversal(TreeNode* root) {
        // code here

        vector<int>ans;
        if(!root){
            return ans;
        }

        stack<TreeNode*>s;
        s.push(root);

        while(!s.empty()){
            TreeNode* temp = s.top();
            s.pop();
            ans.push_back(temp->val);

            if(temp->left){
                s.push(temp->left);
            }

            if(temp->right){
                s.push(temp->right);
            }
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};