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
    long long minVal=INT_MIN;
    long long maxVal=INT_MAX;
    bool check(TreeNode* root, long long minVal, long long maxVal)
    {
        if(root==nullptr)return true;
        if(root->val<=minVal || root->val>=maxVal)
        {
            return false;
        }
        return check(root->right,root->val,maxVal) && check(root->left,minVal,root->val);
    }
    bool isValidBST(TreeNode* root) {
        if(root==nullptr)return true;
        /*if(root->left!=nullptr)
        {
            if(!check(root,root->left->val,maxVal))
            {
                return false;
            }else{
                minVal=root->left->val;
            }
        }
        if(root->right!=nullptr)
        {
            if(!check(root,minVal,root->right->val))return false;
            else{
                maxVal=root->right->val;
            }
        }*/
        return check(root,LONG_MIN,LONG_MAX);
        //return isValidBST(root->left) && isValidBST(root->right);

    }
};
