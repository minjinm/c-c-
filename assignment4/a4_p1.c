/*
CH-230-A
a4_p1.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

int main(){
    //declaring variables
    float up, low, space, x;
    //entering inputs from keyboard
    scanf("%f %f %f", &low, &up, &space);
    //for loop to display the radius, area and perimeter
    for(x=low; x<=up; x+=space)
    {
        printf("%f %f %f\n", x, x * x * M_PI, 2 * x * M_PI);
    }
    return 0;
}