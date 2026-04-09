/*
struct Node
{
  int data;
  Node* left;
  Node* right;
  Node(int x){
      data = x;
      left = right = NULL;
  }
};
*/

class Solution {
public: 

//    start and end point to the range in inorder
//  pos is pointing to current index in preorder
    
    int find(vector<int>&inorder, int start, int end, int val){
        for(int i=start;i<=end;i++){
            if(inorder[i]==val){
                return i;
            }
        }
    }
    
    Node* build(vector<int>&inorder,vector<int> &preorder, int start, int end, int&pos){

    //   base condition
     if(start>end || pos>=preorder.size()){
        return NULL;
     }


      Node *temp = new Node(preorder[pos]);
      int val = preorder[pos];
      int index = find(inorder,start,end,val);
      pos++;
      temp->left = build(inorder,preorder,start,index-1,pos);
      temp->right = build(inorder,preorder,index+1,end,pos);

      return temp;


    }
 

    Node* buildTree(vector<int> inorder, vector<int> preorder) {
        // Your code here
        int pos = 0;
        // It will tell the postion of inorder element
        return build(inorder,preorder,0,inorder.size()-1,pos);
    }
};