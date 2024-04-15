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
    int sumNumbers(TreeNode* root) {
            int currSum=0;
            return dfs(root,currSum); 
      
    }
    
    int dfs(TreeNode* root, int currSum){
        if(!root) return 0;
        currSum = currSum*10+root->val;
        if(root->left==nullptr && root->right==nullptr)  return currSum;
        
       int leftSum= dfs(root->left,currSum);
       int rightSum= dfs(root->right,currSum);
        
        return leftSum+rightSum;
    }
   
      
    
};