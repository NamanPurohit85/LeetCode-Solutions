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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root)
            return ans;

        queue<TreeNode*> q;
        q.push(root);
        int k = 2;

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> currentLevel;
            currentLevel.reserve(levelSize); // Avoid vector reallocation

            for (int i = 0; i < levelSize; i++) {
                TreeNode* curr = q.front();
                q.pop();

                currentLevel.push_back(curr->val);

                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
            }
            if (k % 2 != 0) {
                reverse(currentLevel.begin(), currentLevel.end());
                ans.push_back(move(currentLevel));
            } else {
                ans.push_back(move(currentLevel)); // Move instead of copy
            }
            k++;
        }

        return ans;
    }
};