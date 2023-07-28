/*
CH-230-A
a2_p10.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main(){

    int a, n, h;
    scanf("%d", &n);

    a = 1; 

    while (n <= 0){
        scanf("%d", &n);
    }
    
    while (a <= n && n > 0){
        h = a * 24;
        printf("%d day = %d hours\n", a, h);
        a++;
    }
      
    return 0;
}