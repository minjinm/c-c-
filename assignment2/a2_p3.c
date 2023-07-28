/*
CH-230-A
a2_p3.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main(){

    int weeks, days, hours, sum;

    scanf("%d\n%d\n%d", &weeks, &days, &hours); //reads the 3 inputs from the keyborad
    sum = weeks + days + hours; // calculates the sum
    printf("Total number of hours=%d\n", sum); // prints on the screen

    return 0;
}