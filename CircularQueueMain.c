#include <stdio.h>
#include "CircularQueue.h"

int main(void)
{
	Queue queue;
	int i;

	Queueinit(&queue);

	EnQueue(&queue, 1); EnQueue(&queue, 2);
	EnQueue(&queue, 5); EnQueue(&queue, 4);
	EnQueue(&queue, 5);

	while (!QisEmpty(&queue))
		printf("%d ", DeQueue(&queue));

	return 0;
}