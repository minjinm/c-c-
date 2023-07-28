/* 
 CH-230-A
 a8_p4.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

Stack s;

int main(){
    unsigned int a;
    scanf("%u", &a);
    printf("The binary representation of %d is ", a);
    
    //pushing stack by it's remainder by 2
    while(a != 0){
        push(&s, a % 2);
        a = a / 2;
    }

    //printing last element and popping until empty
    while(!isEmpty(&s))
        printf("%d", pop(&s));
    printf(".");
    return 0;
}

 