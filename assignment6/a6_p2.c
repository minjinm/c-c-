/* 
 CH-230-A
 a6_p2.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
//macro for determining the least sig bit
#define LEAST(num) (((num) & 1) ? 1 : 0 )


int main(){
    //read an unsigned char
    unsigned char ch;
    scanf("%c", &ch);

    //print the decimal represenation of the char
    printf("The decimal representation is: %d\n", (int) ch);

    //print the least significant bit of the char
    printf("The least significant bit is: %d\n", LEAST((int) ch));

    return 0;
}