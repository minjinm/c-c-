/* 
 CH-230-A
 a7_p2.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

char ch;
int n;

struct list {
    int info;
    struct list *next, *prev;
};

void print_list(struct list* my_list){
    struct list *p;
    for(p=my_list; p; p=p->next){
        printf("%d ", p->info);
    }
    printf("\n");
}

void print_back(struct list* my_list){
    struct list *p;
    while(my_list != NULL){
        p = my_list;
        my_list = my_list ->next;
    }
    for(; p != NULL; p=p->prev){
        printf("%c ", p->info);
    }
    printf("\n");
}
  /*  //base case
    if(my_list == NULL){
        return;
    }//print the list after
    printf_back(my_list->next);
    //after everything else is printed
    printf("%d ", my_list->info); */

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

void dispose_list(struct list *my_list ) {
    struct list * nextelem;
    while(my_list != NULL) {
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem ;
    }
}
struct list * delete_position(struct list *head){
    if(head == NULL){
        return NULL;
    }
    struct list *tempor=head;
    head=head->next;
    free(tempor);
    return head;
}

int main(){
    //int x;
    int n;
    char x, m;

    struct list *my_list = NULL;
    beginning:
    scanf("%c", &x);
    switch (x){
        //add the following number to the beginning of the list
        case '1':
        getchar();
        scanf("%d", &n);
        my_list = push_front(my_list, n);
	    break;
        //remove the first element from the list
        case '2':
        scanf("%c", &m);
        getchar();
	    my_list = delete_position(my_list);
	    break;
        //print the list
        case '3':
	    print_list(my_list);
	    break;
        case '4':
        print_back(my_list);
        break;
        //free the memory used by the list and quit the execution
        case '5':
        dispose_list(my_list);
        break;
        }
        while(ch!='5'){
            goto beginning;
        }
    return 0;
}
