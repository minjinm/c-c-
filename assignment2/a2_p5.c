/*
CH-230-A
a2_p5.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main(){

    int a;
    scanf("%d", &a);
    printf("%d\n", a);

    int *ptr_a;
    ptr_a = &a;
    printf("Address1:%p\n", ptr_a);

    *ptr_a = *ptr_a + 5;
    printf("%d\n", a);
    printf("Address2:%p\n", ptr_a);

    return 0;
}