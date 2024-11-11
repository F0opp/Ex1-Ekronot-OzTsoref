#include <iostream>
#include "Queue.h"

int main()
{
	Queue queue;

	initQueue(&queue, 5);
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    enqueue(&queue, 40);
    enqueue(&queue, 50);

    dequeue(&queue);
    dequeue(&queue);
    dequeue(&queue);

    enqueue(&queue, 60);

    while (!isEmpty(&queue)) 
    {
        dequeue(&queue);
    }

    cleanQueue(&queue);

    return 0;
}