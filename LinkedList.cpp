#include "LinkedList.h"
#include <iostream>


/*
function adds a new node to the beginning of a linked list
input:	listNode** head - a pointer to the pointer of the head node of the list,
		int data - the value of the node
output: none
*/
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

/*
function deletes a node from the end of a linked list
input:	listNode** head - a pointer to the pointer of the head node of the list.
output: none
*/
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