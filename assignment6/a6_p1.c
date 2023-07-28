/* 
 CH-230-A
 a6_p1.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
//definition of macro that swaps the numbers
#define SWAP(a, b, c) a=a+b; b=a-b; a=a-b;
//a,b->variables; c->data type
int x,y;
double e,d;
//declaration of the integers and doubles
int main(){
    //reading integers from keyboard
    scanf("%d%d", &x, &y);
    //call swap for integers
    SWAP(x, y, int);
    //reading doubles
    scanf("%lf%lf", &e, &d);
    //call swap for doubles
    SWAP(e, d, double);
    //display on the screen contents of 4 variables after swap
    printf("After swapping:\n");

    printf("%d\n%d\n", x, y);
    printf("%.6lf\n%.6lf\n", e, d);

    return 0;
}