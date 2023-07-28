/*
CH-230-A
a2_p4.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main(){

    float a, b, h;
    float area1, area2, area3, area4; //declares variables as float

    scanf("%f\n%f\n%f", &a, &b, &h); //reads values from the keyboard

    area1 = a*a;
    area2 = a*b;
    area3 = (a*h)/2;
    area4 = (a+b)/2*h; //calculates the areas

    printf("square area=%f\n", area1);
    printf("rectangle area=%f\n", area2);
    printf("triangle area=%f\n", area3);
    printf("trapezoid area=%f\n", area4); //prints the values of areas on the screen

    return 0;
}