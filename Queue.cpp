#include "Queue.h"
#include <iostream>

/*
function initilizes a new Queue
input:	Queue* q - pointer to the new queue, 
		unsigned int size - capacity of the queue
output: none
*/
void initQueue(Queue* q, unsigned int size)
{
	q->front = 0;
	q->back = 0;
	q->capacity = size + 1;
	q->data = new int[size];
	std::cout << "Queue created! " << std::endl;
}

/*
function frees the memory allocated to a queue and clears the queue's fields
input: Queue* q - pointer to the queue to be cleaned
output: none
*/
void cleanQueue(Queue* q)
{
	delete[] q->data;
	q->data = 0;
	q->front = 0;           
	q->back = 0;            
	q->capacity = 0;
	std::cout << "Queue cleaned!" << std::endl;
}

/*
function increments an index in a circular way accourding to the capacity
input:	int index - current index position
		int size - the size of the buffer
output: the incremented index
*/
int increment(int index, int size) 
{
	return (index + 1) % size;
}

/*
function checks if a queue is empty
input:	Queue* s - pointer to the queue 
output: bool of if the queue is empty or not
*/
bool isEmpty(Queue* s)
{
	return s->front == s->back;
}

/*
function checks if a queue is full
input:	Queue* s - pointer to the queue
output: bool of if the queue is full or not
*/
bool isFull(Queue* s)
{
	return increment(s->front, s->capacity) == s->back;
}

/*
function adds a new element to a queue if possible
input:	Queue* q - pointer to the queue 
		unsigned int newValue - the value of the element
output: none
*/
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

/*
function removes element from queue if possible
input:	Queue* q - pointer to the queue 
output: if the list is not empty: the value of the element that was removed
		if the list is empty: -1
*/
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