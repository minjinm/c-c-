/*
CH-230-A
a3_p1.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main(){

    float x;
    int n;
    //reading the x, n from keyboard
    scanf("%f\n%d", &x, &n); 
    
    //checking if input's valid
    while (n <= 0){  
    //instruction if input is invalid
        printf("Input is invalid, reenter value\n"); 
        scanf("%d\n", &n);                           
    }
    
    int a;
    // using 'for' iteration to print x n times
    for (a=1; a<=n; a++){ 
        printf("%f\n", x);
    }

    return 0;
}