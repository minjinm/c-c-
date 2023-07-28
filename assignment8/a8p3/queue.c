/* 
 CH-230-A
 a8_p3.c
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
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    if(queue_is_empty(pq)){
        return 1;
    }
    //copy item
    *pitem = pq->front->item;
    //reset front pointer
    Node *tmp = pq->front;
    pq->front=pq->front->next;
    //free memory
    free(tmp);
    //reset pointers if empty
    if(pq->items==1){
        pq->front = NULL;
        pq->rear = NULL;
    }
    pq->items=pq->items-1;
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(Queue *pq)
{
    //beginning of queue
    printf("content of the queue: ");
    Node* node1=pq->front;
    //iterate
    while(node1 != pq->rear){
        printf("%d ", node1->item);
        node1=node1->next;
    }
    //if rear is not null, print
    if(node1 != NULL){
        printf("%d \n", node1->item);
    } else {
        printf("\n");
    }
}