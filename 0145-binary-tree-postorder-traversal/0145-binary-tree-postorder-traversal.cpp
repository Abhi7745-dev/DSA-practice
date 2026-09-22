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
    void solve(struct TreeNode *temp,vector<int>& ans){

        if(temp==NULL){
            return;
        }
        solve(temp->left,ans);
        solve(temp->right,ans);
        ans.push_back(temp->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        solve(root,ans);
        return ans;
    }
};