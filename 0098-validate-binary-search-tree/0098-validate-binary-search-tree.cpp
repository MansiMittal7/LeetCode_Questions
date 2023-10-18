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
    //TC-O(N) SC-O(1)
public:
    bool isValidBST(TreeNode* root) {
        return isBST(INT_MIN,INT_MAX,root);
        }
    
    bool isBST(int min,int max,TreeNode* root) {
        if(root==NULL) return true;
        
        if(root-> val > max || root->val < min) return false;
        
        if(root->val==INT_MIN && root->left!=NULL) return false;
        if(root->val==INT_MAX && root->right!=NULL) return false;
        
        bool lIsBST=true,rIsBST=true;
        if(root->val!=INT_MIN) lIsBST = isBST(min,root->val-1,root->left);
        if(root->val!=INT_MAX) rIsBST = isBST(root->val+1,max,root->right);
        return lIsBST && rIsBST;
    }
};


    
