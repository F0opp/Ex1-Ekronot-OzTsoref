#include "LinkedList.h"
#include <iostream>

void add(listNode** head, int data)
{
	if (!*head)
	{
		*head = new listNode;
		(*head)->data = data;
		(*head)->next = nullptr;
	}
	else
	{
		listNode* newNode = new listNode;
		newNode->data = data;
		newNode->next = *head;
		*head = newNode;
	}
}

void del(listNode** head)
{
	if (!*head)
	{
		return;
	} 

	listNode* temp = *head;
	*head = (*head)->next; 
	temp->data = 0;
	delete temp;             
}