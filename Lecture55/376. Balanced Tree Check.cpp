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

    int calcHeight(Node*root,vector<int>&leftHeight ,vector<int>&rightHeight){
        if(!root){
            return 0;
        }
        
        // leaf node
        if(!root->left&&!root->right){
            // leftHeight.push_back(0);
            // rightHeight.push_back(0);
            return 1;
        }

        int heightofLeft = calcHeight(root->left,leftHeight,rightHeight);
        int heightofRight = calcHeight(root->right,leftHeight,rightHeight);
        
        leftHeight.push_back(heightofLeft);
        rightHeight.push_back(heightofRight);

        return 1+max(heightofLeft,heightofRight);

    }

    bool isBalanced(Node* root) {
        // code here

        vector<int>leftHeight;
        vector<int>rightHeight;

        calcHeight(root,leftHeight,rightHeight);

        for(int i=0;i<leftHeight.size();i++){
            if(abs(leftHeight[i]-rightHeight[i])>1){
                return 0;
            }
        }


        return 1;
    }
};