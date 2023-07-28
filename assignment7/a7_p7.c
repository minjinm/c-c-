/* 
 CH-230-A
 a7_p7.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>

#define MAX 12 //Maximum number of elements that can be stores

int top=-1, stack[MAX];
void push();
void pop();

int main(){

{
int ch;
while(1) //infinite loop, will end when choice will be 4
{
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
default: printf("\nWrong Choice!!");
}
}
}
void push()
{
int val;
if(top==MAX-1)
{
printf("\nStack Overflow");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
 
void pop()
{
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}

    return 0;
}