#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	q->front = 0;
	q->back = 0;
	q->capacity = size + 1;
	q->data = new int[size];
	std::cout << "Queue created! " << std::endl;
}

void cleanQueue(Queue* q)
{
	delete[] q->data;
	q->data = 0;
	std::cout << "Queue cleaned!" << std::endl;
}

int increment(int index, int size) 
{
	return (index + 1) % size;
}

bool isEmpty(Queue* s)
{
	return s->front == s->back;
}

bool isFull(Queue* s)
{
	return increment(s->front, s->capacity) == s->back;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->data[q->front] = newValue;
		q->front = increment(q->front, q->capacity);

		std::cout << "Enqueued " << newValue << "!" << std::endl;
	}
	else
	{
		std::cout << "Queue is full" << std::endl;
	}
}

int dequeue(Queue* q)
{
	if (!isEmpty(q))
	{
		int out = 0;
		out = q->data[q->back];
		q->back = increment(q->back, q->capacity);
		std::cout << "Dequeued " << out << "!" << std::endl;
		return out;
	}
	else
	{
		std::cout << "Queue is empty" << std::endl;
		return -1;
	}
}