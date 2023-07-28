#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

#define MAX 12 //Maximum number of elements that can be stores

int top=-1, stack[MAX];
    void push(){
        int val;
        if(top==MAX-1)
            printf("\nStack Overflow");
        else{
            printf("\nEnter element");
            scanf("%d",&val);
            top=top+1;
            stack[top]=val;
        }
    }
 
void pop(){
    if(top==-1){
    printf("\nStack is empty");
    }
    else{
        printf("\nDeleted element is %d",stack[top]);
    top=top-1;
    }
}
