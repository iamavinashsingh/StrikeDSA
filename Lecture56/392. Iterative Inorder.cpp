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
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>ans;
        if(!root){
            return ans;
        }
        stack<Node*>s;
        stack<bool>traverse;

        s.push(root);
        traverse.push(0);

        while(!s.empty()){

            Node* temp = s.top();
            s.pop();

            int val = traverse.top();
            traverse.pop();

            if(val){
                ans.push_back(temp->data);
            }
            else{
                if(temp->right){
                    s.push(temp->right);
                    traverse.push(0);
                }

                s.push(temp);
                traverse.push(1);

                if(temp->left){
                    s.push(temp->left);
                    traverse.push(0);
                }
            }
        }


        return ans;
        
    }
};