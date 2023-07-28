/* 
 CH-230-A
 a7_p1.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h" //include header file

//function definitions 
//print the list
void print_list(struct list* my_list){
    struct list *p;
    for(p=my_list; p; p=p->next){
        printf("%d ", p->info);
    }
    printf("\n");
}
//add the following number to the beginning of the list
struct list* push_front(struct list *my_list, int value){
    struct list *newel;
    newel = (struct list*) malloc(sizeof(struct list));
    if(newel == NULL){
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info=value;
    newel->next=my_list;
    return newel;
}
//add the following number to the end of the list
struct list* push_back(struct list* my_list, int value){
    struct list *cursor, *newel;
    cursor = my_list;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;
    if (my_list == NULL){
        return newel;
    }
    while(cursor->next != NULL)
        cursor = cursor->next;
    cursor->next = newel;
    return my_list;
}
//free the memory used by the list and quit the execution
void dispose_list(struct list *my_list ) {
    struct list * nextelem;
    while(my_list != NULL) {
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem ;
    }
}
//remove the first element from the list
struct list * delete_position(struct list *head){
    if(head == NULL){
        return NULL;
    }
    struct list *tempor=head;
    head=head->next;
    free(tempor);
    return head;
}