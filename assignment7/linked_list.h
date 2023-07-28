/* 
 CH-230-A
 a7_p1.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

//struct declaration
struct list {
    int info;
    struct list *next;
};
//function declaration
void print_list(struct list* my_list);
struct list* push_front(struct list *my_list, int value);
struct list* push_back(struct list* my_list, int value);
void dispose_list(struct list *my_list );
struct list * delete_position(struct list *head);

