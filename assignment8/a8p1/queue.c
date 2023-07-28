/* 
 CH-230-A
 a8_p1.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	// add missing stuff

    //get out from function
    if(queue_is_full(pq)==1){
        return 1;
    }
    Node *n1 = (Node*)malloc(sizeof(Node));
    if (n1 == NULL){
    //allocation check
        return -1;
    }
    n1->item = item;
    //new item
    n1->next = NULL;
    if(!queue_is_empty(pq)){
        pq->rear->next=n1;
        pq->rear=n1;
    }
    else{
        pq->front=n1;
        pq->rear=n1;
    }
    pq->items=pq->items+1;
    //deallocate memory
    free(n1);
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	// add missing stuff
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}