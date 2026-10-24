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
    void add(TreeNode *&head,int value){
        TreeNode *temp=head;
        TreeNode *newnode;
        newnode=new TreeNode();
        newnode->val=value;
        newnode->left=NULL;
        newnode->right=NULL;
        if(head==NULL){
            head=newnode;
            return;
        }
        else if(temp!=NULL){
            while(1){
                if(value<temp->val){
                    if(temp->left==NULL){
                        temp->left=newnode;
                        return;
                    }
                    else{
                        temp=temp->left;
                    }
                }
                if(value>temp->val){
                    if(temp->right==NULL){
                        temp->right=newnode;
                        return;
                    }
                    else{
                        temp=temp->right;
                    }
                }
            }
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *head=NULL;
        for(int i=0;i<preorder.size();i++){
            add(head,preorder[i]);
        }
        return head;
    }
};