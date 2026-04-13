/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    // Function to search a node in BST.
    bool search(Node* root, int x) {
        // Your code here
         
        //  base condition
        if(!root){
            return 0;
        }


        if(root->data==x){
            return 1;
        }

        // left 
        if(x<root->data){
            return search(root->left,x);
        }

        // right
        else{
            return search(root->right,x);
        }


    }
};