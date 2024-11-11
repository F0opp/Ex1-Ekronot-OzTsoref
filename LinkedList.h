#pragma once 
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct listNode
{
	int data;

	listNode* next;

} listNode;

void add(listNode** head, int data);
void del(listNode** head);

#endif