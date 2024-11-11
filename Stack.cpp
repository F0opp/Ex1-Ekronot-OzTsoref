#include "Stack.h"
#include <iostream>

/*
function adds a node to the stack
input: Stack* s - the top of the stack, unsigned int element - the node's value
output: none
*/
void push(Stack* s, unsigned int element)
{
	if (!s)
	{
		std::cout << "Stack is uninitialized" << std::endl;
		return;
	}
	else
	{
		add(&(s->top), element);
	}
}

/*
function removes a node from the stack
input: Stack* s - the top node of the stack.
output: the int value of the node removed
*/
int pop(Stack* s)
{
	int element = 0;
	if (!s)
	{
		std::cout << "Stack is uninitialized" << std::endl;
		return 0;
	}
	else
	{
		listNode* temp = s->top;
		element = s->top->data;
		s->top = s->top->next;
		delete temp;

		return element;
	}
}

/*
function 
input: 
output: 
*/
void initStack(Stack* s)
{
	if (s != nullptr)
	{
		s->top = nullptr;
	}
}

/*
function
input:
output:
*/
void cleanStack(Stack* s)
{
	if (s == nullptr)
	{
		return;
	}

	while (s->top != nullptr)
	{
		pop(s);
	}
}

/*
function
input:
output:
*/
bool isEmpty(Stack* s)
{
	return (s != nullptr && s->top == nullptr);
}