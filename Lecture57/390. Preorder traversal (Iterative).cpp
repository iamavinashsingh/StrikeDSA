/*
struct Node
{
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
    vector<int> preOrder(Node* root) {
        // code here
        

        vector<int>ans;
        Node* curr = root;

        while(curr){
            // left doesn't exist
            if(!curr->left){
                ans.push_back(curr->data);
                curr = curr->right;
            }
            else{
                Node* pred = curr->left;

                // Move to the right most node untill you found null or curr
                while(pred->right&&pred->right!=curr){
                    pred = pred->right;
                }

                if(!pred->right){
                    pred->right = curr;
                    ans.push_back(curr->data);
                    curr = curr->left;
                }
                else{
                    pred->right = NULL;
                    curr = curr->right;
                }
            }
            // Left side exist
        }

        return ans;


    }
};