/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    void inorder(TreeNode* root, TreeNode*& prev, TreeNode*& first,
                 TreeNode*& second) {
        if (!root)
            return;

        inorder(root->left, prev, first, second);

        if (prev && root->val < prev->val) {
            if (!first)
                first = prev;
            second = root;
        }
        prev = root;

        inorder(root->right, prev, first, second);
    }

public:
    void recoverTree(TreeNode* root) {
        TreeNode* prev = nullptr;
        TreeNode* first = nullptr;
        TreeNode* second = nullptr;

        inorder(root, prev, first, second);

        if (first && second) {
            swap(first->val, second->val);
        }
    }
};