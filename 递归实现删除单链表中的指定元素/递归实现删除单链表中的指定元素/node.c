#include "node.h"

struct Node* deleteNodes(struct Node* head, int x)
{
	if (head == NULL)
	{
		return NULL;
	}

	head->next = deleteNodes(head->next, x);
	if (head->value == x)
	{
		struct Node* nextNode = head->next;
		free(head);
		return nextNode;
	}

	return head;
};


struct Node* createLinkedList(int values[], int length) {
    if (length == 0) {
        return NULL;
    }

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    if (head == NULL) {
        printf("内存分配失败");
        return NULL;
    }

    head->value = values[0];
    head->next = NULL;

    struct Node* current = head;

    for (int i = 1; i < length; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("内存分配失败");
            // 释放已分配的节点内存
            while (head != NULL) {
                struct Node* temp = head;
                head = head->next;
                free(temp);
            }
            return NULL;
        }

        newNode->value = values[i];
        newNode->next = NULL;

        current->next = newNode;
        current = newNode;
    }

    return head;
}

void printList(struct Node* head)
{
	struct Node* current = head;
	while (current != NULL)
	{
		printf("%d->", current->value);
		current = current->next;
	}

	printf("NULL\n");
}