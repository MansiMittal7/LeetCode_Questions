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
private:
    int maxDepth, bottomLastVal;
        
        void dfs(TreeNode* node, int depth){
            if(node==nullptr) return ;
            
            if(depth>maxDepth){
                maxDepth = depth;
                bottomLastVal= node->val;
            }
            dfs(node->left, depth+1);
            dfs(node->right, depth+1);
        }
    
public:
    int findBottomLeftValue(TreeNode* root) {
        //dfs traversal 
        maxDepth=-1;
        bottomLastVal=0;
        dfs(root,0);
        return bottomLastVal;
    }
};