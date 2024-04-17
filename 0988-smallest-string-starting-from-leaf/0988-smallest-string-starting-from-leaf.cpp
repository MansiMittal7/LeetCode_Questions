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
    string smallestString="";
    void dfs(TreeNode *node, string &s){
        if(node==nullptr) return ;
        s.push_back('a'+node->val);
        if(node->left==nullptr && node->right==nullptr){
            reverse(s.begin(),s.end());
            if(smallestString=="") smallestString =s;
            else smallestString = min(smallestString,s);
            reverse(s.begin(),s.end()); 
        }
        dfs(node->left,s);
        dfs(node->right,s);
        s.pop_back();
    }
public:
    string smallestFromLeaf(TreeNode* root) {
        
        string s="";
        dfs(root,s);
        return smallestString;
    }
};