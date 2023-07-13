// 力扣 剑指 Offer 68 - I. 二叉搜索树的最近公共祖先  https://leetcode.cn/problems/er-cha-sou-suo-shu-de-zui-jin-gong-gong-zu-xian-lcof/
/*
    目前该代码已通过测试样例。
    一开始确实是一头雾水，后来看到了搜索树，才有了些思路，但对树的操作实在生疏，看了下评论里递归操作的代码，才勉强写了出来
*/
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
            return NULL;
        if(root -> val > p -> val && root -> val > q -> val)
            return lowestCommonAncestor(root -> left, p, q);
        else if(root -> val < p -> val && root -> val < q -> val)
            return lowestCommonAncestor(root -> right, p, q);
        else
            return root;
    }
};