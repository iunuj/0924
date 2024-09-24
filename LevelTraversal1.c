#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "LevelTraversal.h"
#include "Queue.h"

int GetSumOfNodes(TreeNode* root) {

	int height;

	if (root == NULL) return 0;

	height = 1 + ((GetSumOfNodes(root->left) > GetSumOfNodes(root->right))
		? GetSumOfNodes(root->left) : GetSumOfNodes(root->right));
	return height;
}

int GetNumberOfNodes(TreeNode* root) {
	int count;

	if (root == NULL) return 0;

	count = 1 + GetNumberOfNodes(root->left)
		+ GetNumberOfNodes(root->right);
	return count;
}

int GetHeightOfTree(TreeNode* root) {
	int sum;

	if (root == NULL) return 0;
	sum = root->data + GetHeightOfTree(root->left)
		+ GetHeightOfTree(root->right);
	return sum;
}

int GetNumberOfLeafNodes(TreeNode* root)
{

	int node_sum = 0;
	LinkedQueueType q;
	TreeNode* ptr = root;
	init(&q);	 // 큐 초기화

	if (root == NULL) return;
	enqueue(&q, ptr);
	while (!is_empty(&q)) {
		ptr = dequeue(&q);
		printf(" [%d] ", ptr->data);
		node_sum += ptr->data;
		if (ptr->left)
			enqueue(&q, ptr->left);
		if (ptr->right)
			enqueue(&q, ptr->right);
	}
	return node_sum;
}

