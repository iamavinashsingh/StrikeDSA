struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    vector<int> largestValues(TreeNode* root) {
        // code here
        vector<int>result;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int len = q.size();
            // current level mein kitne element hai, utne ko hi queue se bhaer niklna hai
            int ans = INT_MIN;

            while(len--){
                TreeNode* temp = q.front();
                q.pop();

                if(temp->left){
                    q.push(temp->left);
                }

                if(temp->right){
                    q.push(temp->right);
                }

                ans = max(ans,temp->val);
            }

            // current level finished
            result.push_back(ans);
        }

        return result;
    }
};