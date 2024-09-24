#pragma once

typedef struct TreeNode {
	int data;
	struct TreeNode* left, * right;
} TreeNode;

extern int GetSumOfNodes(TreeNode* root);
extern int GetNumberOfNodes(TreeNode* root);
extern int GetHeightOfTree(TreeNode* root);
extern int GetNumberOfLeafNodes(TreeNode* root);
