// Cousins in Binary Tree
// Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/

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
    int leva = -1, levb = -2, pa=-3, pb=-4;
    void isCousinsInternal(TreeNode* root, int x, int y, int level, int parent)
    {
        if(root==NULL)
            return;
        if(root->val == x)
        {
            leva = level;
            pa = parent;
        }
        else if(root->val  == y)
        {
            levb = level;
            pb = parent;
        }
        isCousinsInternal(root->left, x, y, level+1, root->val);
        isCousinsInternal(root->right, x, y, level+1, root->val);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        isCousinsInternal(root, x, y, 0, -1);
        return (pa!=pb)&&(leva==levb);
    }
};
