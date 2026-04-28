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
    vector<int>nums;
    int countnums(TreeNode* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        nums.push_back(root->val);
        return 1+countnums(root->left)+countnums(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ct=countnums(root);
        sort(nums.begin(),nums.end());
        return nums[k-1];
    }
};
