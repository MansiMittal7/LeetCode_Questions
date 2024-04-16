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
//     void dfs(TreeNode *node, int val, int depth,int currDepth){     
//         if(node==nullptr) return;
//         // if(currDepth<depth-1){
//             // dfs(node->left, val, depth,currDepth+1);
//             // dfs(node->right, val, depth,currDepth+1);
//         // }
//         if(currDepth==depth-1){
//             TreeNode *exLeftNode=node->left;
//             TreeNode *exRightNode=node->right;
//             TreeNode *newLeftChild= new TreeNode(val);
//             TreeNode *newrightChild= new TreeNode(val);
            
//             node->left=newLeftChild;
//             node->right=newrightChild;
//             newLeftChild->left=exLeftNode;
//             newrightChild->left=exRightNode;
//         }
//         dfs(node->left, val, depth,currDepth+1);
//         dfs(node->right, val, depth,currDepth+1);
//     }
    
// public:
//     TreeNode* addOneRow(TreeNode* root, int val, int depth) {
//         if(depth==1){
//             // TreeNode *currNode=root;
//             TreeNode *newNode= new TreeNode(val);
//             newNode->left=root;
//             return newNode;
//         }
//         dfs(root,val,depth,1);
//         return root;
//     }
// };


void helper(TreeNode* root, int v, int d, int height)
    {
        if (!root)
            return;
        
        if ( height == (d-1) )
        {
            TreeNode* originalLeft  = root->left;
            TreeNode* originalRight = root->right;
            
            TreeNode* newLeft  = new TreeNode(v);
            TreeNode* newRight = new TreeNode(v);
            
            root->left  = newLeft;
            root->right = newRight;
            
            newLeft->left = originalLeft;
            newRight->right = originalRight;
        }
        
        helper(root->left,  v, d, height+1);
        helper(root->right, v, d, height+1);
    }
    public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1)
        {
            TreeNode* node = new TreeNode(val);
            node->left = root;
            return node;
        }
        
        helper(root, val, depth, 1);
        
        return root;
        
    }
};