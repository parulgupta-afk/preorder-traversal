#include <bits/stdc++.h>

#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

class Solution
{
public:
    vector<int> preorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> st;
        TreeNode *node = root;
        vector<int> preorder;

        while (true)
        {
            if (node != NULL)
            {
                preorder.push_back(node->val);
                st.push(node);
                node = node->left;
            }
            else
            {
                if (st.empty() == true)
                    break;
                node = st.top();
                st.pop();
                node = node->right;
            }
        }
        return preorder;
    }
};
