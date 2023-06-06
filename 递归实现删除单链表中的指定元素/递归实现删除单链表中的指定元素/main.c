#include "node.h"

int main()
{
	int values[] = { 1,2,3,4,5,6,7,8,9,10 };
	int length = sizeof(values) / sizeof(values[0]);

	struct  Node* head = createLinkedList(values, length);
	printList(head);
	head = deleteNodes(head, 3);
	head = deleteNodes(head, 4);
	

	printList(head);

	return 0;
}



















