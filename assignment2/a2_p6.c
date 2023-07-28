/*
CH-230-A
a2_p6.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main(){

    double x, y;
    scanf("%lf\n%lf", &x, &y);

    double *ptr_one, *ptr_two, *ptr_three;

    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("Address of ptr_one:%p\n", ptr_one);
    printf("Address of ptr_two:%p\n", ptr_two);
    printf("Address of ptr_three:%p\n", ptr_three);

    return 0;
}