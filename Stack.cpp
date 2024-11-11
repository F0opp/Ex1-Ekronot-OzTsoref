#include "Stack.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
	if (!s)
	{
		std::cout << "Stack is uninintialized" << std::endl;
		return;
	}
	else
	{
		add(&(s->top), element);
	}
}

int pop(Stack* s)
{
	int element = 0;
	if (!s)
	{
		std::cout << "Stack is uninintialized" << std::endl;
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

void initStack(Stack* s)
{
	if (s != nullptr)
	{
		s->top = nullptr;
	}
}

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

bool isEmpty(Stack* s)
{
	return (s != nullptr && s->top == nullptr);
}