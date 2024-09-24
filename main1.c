#include <stdio.h>
#include <stdlib.h>
#include "LevelTraversal.h"

void PlaceNode(TreeNode* node, int direction, int data) {
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;

	if (direction == 0) {
		node->left = newNode;
	}
	else if (direction == 1) {
		node->right = newNode;
	}
}


void GenerateLinkTree(TreeNode* root) {
	PlaceNode(root, 0, 2);
	PlaceNode(root, 1, 3);
	PlaceNode(root->left, 0, 4);
	PlaceNode(root->left, 1, 5);
	PlaceNode(root->right, 0, 6);
	PlaceNode(root->right, 1, 7);
}

int main() {
	TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
	root->data = 1;
	root->left = NULL;
	root->right = NULL;

	GenerateLinkTree(root);

	GetSumOfNodes(root);
	GetNumberOfNodes(root);
	GetHeightOfTree(root);
	GetNumberOfLeafNodes(root);

	printf("Sum of nodes: %d\n", GetSumOfNodes(root));
	printf("Number of nodes: %d\n", GetNumberOfNodes(root));
	printf("Height of Tree: %d\n", GetHeightOfTree(root));
	printf("Number of leaf nodes: %d\n", GetNumberOfLeafNodes(root));

	return 0;
}
