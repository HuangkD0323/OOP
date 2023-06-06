#pragma once

#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int value;
	struct Node* next;
};

struct Node* deleteNodes(struct Node* head, int x);
struct Node* createNode(int value);
struct Node* createLinkedList(int values[], int length);
void printList(struct Node* head);