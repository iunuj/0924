#pragma once
#include "LevelTraversal.h"

typedef TreeNode* element;	// ����� Ÿ��
typedef struct QueueNode {	// ť�� ����� Ÿ�� 
	element data;
	struct QueueNode* link;
} QueueNode;

typedef struct {		// ť ADT ����
	QueueNode* front, * rear;
} LinkedQueueType;

extern void init(LinkedQueueType* q);
extern int is_empty(LinkedQueueType* q);
extern void enqueue(LinkedQueueType* q, element data);
extern element dequeue(LinkedQueueType* q);