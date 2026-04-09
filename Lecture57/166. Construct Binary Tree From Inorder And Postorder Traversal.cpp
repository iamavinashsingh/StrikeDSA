/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
  int find(vector<int>&inorder, int start, int end, int val){
        for(int i=start;i<=end;i++){
            if(inorder[i]==val){
                return i;
            }
        }
    }
    
    TreeNode* build(vector<int>&inorder,vector<int> &postorder, int start, int end, int&pos){

    //   base condition
     if(start>end || pos<0){
        return NULL;
     }


      TreeNode *temp = new TreeNode(postorder[pos]);
      int val = postorder[pos];
      int index = find(inorder,start,end,val);
      pos--;
      temp->right = build(inorder,postorder,index+1,end,pos);
      temp->left = build(inorder,postorder,start,index-1,pos);
      

      return temp;


    }



TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
     int pos = postorder.size()-1;
        // It will tell the postion of inorder element
        return build(inorder,postorder,0,inorder.size()-1,pos);
}