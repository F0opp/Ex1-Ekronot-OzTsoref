#include "iostream"
#include "LinkedList.h"

int main()
{
	listNode* head = nullptr;

	del(&head);
	add(&head, 1);
	add(&head, 2);
	add(&head, 3);

	del(&head);
	del(&head);
	del(&head);

	return 0;
}