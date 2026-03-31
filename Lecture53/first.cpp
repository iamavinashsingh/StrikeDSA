#include<iostream>
using namespace std;
//           1
//       2        3
//    4.   5.   6.   7
class Node{
    public:
    int data;
    Node *left, *right;

    Node(int val){
        data = val;
        left= right = NULL;
    }
};


// Node, left, Right
void preorder(Node *root){
   
    if(!root){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


// Left Node Right

void inorder(Node *root){
    if(!root){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


// Left Right Node
void postOrder(Node *root){
    if(!root){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


int main(){
   
    int x, leftValue, rightValue;
    cout<<"Enter the root node: ";
    cin>>x;
    Node *root = new Node(x);
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        // Left value
        cout<<"Enter the "<<temp->data<<" left Node: ";
        cin>>leftValue;

        if(leftValue!=-1){
            temp->left = new Node(leftValue);
            q.push(temp->left);
        }
        // Right Value
        cout<<"Enter the "<<temp->data<<" Right Node: ";
        cin>>rightValue;

        if(rightValue!=-1){
            temp->right = new Node(rightValue);
            q.push(temp->right);
        }
    }
    
    cout<<"Preorder Traversal: "<<" ";
    preorder(root);
    cout<<endl;


    cout<<"inorder Traversal: "<<" ";
    inorder(root);
    cout<<endl;
    

    cout<<"PostOrder Traversal: "<<" ";
    postOrder(root);
    cout<<endl;
    return 0;

}

// Find level Order traversal
// Print tree: Node RIght Left
// Print tree: Right Node Left
// Print tree: Right Left Node