/*
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    // Function to check if a binary tree is balanced or not.
    int checkBalance(Node *root){
        if(!root){
            return 0;
        }

        // leaf Node
        if(!root->left&&!root->right)
        return 1;

        int leftHeight = checkBalance(root->left);
        if(leftHeight==-1){
            return -1;
        }

        int rightHeight = checkBalance(root->right);
        if(rightHeight==-1){
            return -1;
        }


        if(abs(leftHeight-rightHeight)>1){
            return -1;
        }

        return 1+max(leftHeight,rightHeight);
    }


    bool isBalanced(Node* root) {
        // code here

        return checkBalance(root)!=-1;
    }
};