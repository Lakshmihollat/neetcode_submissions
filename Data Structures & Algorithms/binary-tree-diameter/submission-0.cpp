class Solution {
public:
    int maxDiameter = 0;

    int height(TreeNode* root) {
        if (!root) return 0;

        int left = height(root->left);
        int right = height(root->right);

        // Update max diameter (edges between farthest nodes)
        maxDiameter = max(maxDiameter, left + right);

        return max(left,right) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxDiameter;
    }
};
