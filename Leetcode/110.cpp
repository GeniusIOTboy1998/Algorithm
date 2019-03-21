/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        maxDepth(root);
        return result;
    }
private:
        bool result=true;
        
    int maxDepth(TreeNode* root){
        if(root==NULL)   return true;
        int left=maxDepth(root->left);  
        int right=maxDepth(root->right);
        if(left-right<-1||left-right>1)   result=false;
        return 1+max(left,right);
    }
};

// 依次求各子树的max
