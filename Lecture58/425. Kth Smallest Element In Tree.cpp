/**
 * Definition for a binary tree node.
 * struct Node {
 *     int data;
 *     Node *left;
 *     Node *right;
 *     Node(int x) : data(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    // void inorder(Node*root, vector<int>&ans){
    //     if(!root){
    //         return;
    //     }

    //     inorder(root->left,ans);
    //     ans.push_back(root->data);
    //     inorder(root->right,ans);
    // }
    
    void inorder(Node*root, int &k, int &result){
        if(!root||k<=0){
            return;
        }

        inorder(root->left,k,result);
        k--;
        if(k==0){
            result = root->data;
            return;
        }
        inorder(root->right,k,result);
    }

    int kthSmallest(Node* root, int k) {
        // Your code here
        // 
        // vector<int>ans;
        // inorder(root,ans);

        // return ans[k-1];

        int result = -1;
        inorder(root,k,result);

        return result;
    }
};