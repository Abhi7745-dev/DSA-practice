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
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *newnode= new TreeNode();
        newnode->val=val;
        newnode->left=NULL;
        newnode->right=NULL;
        if(root==NULL){
            root=newnode;
            return root;
        }
        TreeNode *temp=new TreeNode();
        temp=root;
        while(1){
            if(val<temp->val){
                if(temp->left==NULL){
                    temp->left=newnode;
                    break;
                }
                else{
                    temp=temp->left;
                }
            }
            else{
                if(temp->right==NULL){
                    temp->right=newnode;
                    break;
                }
                else{
                    temp=temp->right;
                }
            }
        }
        return root;
    }
};