/* 
 CH-230-A
 a6_p3.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
//macro for finding the largest value
#define MAX(a, b, c) ((a>b && a>c) ? a : ((b>c) ? b : c))
//macro for finding the least value
#define MIN(a, b, c) ((a<b && a<c) ? a : ((b<c) ? b : c))
//macro for determining the midrange
#define MID(a, b, c) ((MAX(a, b, c) + MIN(a, b, c))/2.0)

int main(){

    //read 3 integers
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);

    //display the mid-range by using the MID macro
    printf("The mid-range is: %.6f\n", MID(a, b, c));

    return 0;
}