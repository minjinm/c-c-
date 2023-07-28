/*
CH-230-A
a2_p8.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main(){

    int a;
    scanf("%d", &a); //input from keyboard

    if((a % 2 == 0) && (a % 7 == 0)) {                   //modula operator for checking remainder

        printf("The number is divisible by 2 and 7\n");    //&& means both conditions must fulfill, it prints this line
    }
    else{

        printf("The number is NOT divisible by 2 and 7\n"); //when one of the condition doesn't fulfill, it prints this line
    }

    return 0;
}