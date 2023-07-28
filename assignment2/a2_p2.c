/*
CH-230-A
a2_p2.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main(){
    
    char c;
    scanf("%c", &c); //read a char (c) from the keyboard

    printf("character=%c\n", c); //prints the char as character using %c placeholder
    printf("decimal=%d\n", c); //prints as in decimal using using %d
    printf("octal=%o\n", c); //prints as in octal using %o
    printf("hexadecimal=%x\n", c); //prints in hexadecimal using %x

    return 0;
}